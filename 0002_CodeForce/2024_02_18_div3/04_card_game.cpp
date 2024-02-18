#include <bits/stdc++.h>
using namespace std;

struct Card {
    char rank, suit;
    Card(string cs) : rank(cs[0]), suit(cs[1]) {}
    bool operator<(const Card& o) const {
        return suit == o.suit ? rank < o.rank : suit < o.suit;
    }
};

bool canBeat(const Card& a, const Card& b, char trump) {
    if (a.suit == b.suit) return a.rank > b.rank;
    return a.suit == trump;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char trump;
        cin >> n >> trump;
        vector<Card> cards;
        for (int i = 0; i < 2*n; ++i) {
            string cardStr;
            cin >> cardStr;
            cards.push_back(Card(cardStr));
        }

        sort(cards.begin(), cards.end());

        vector<pair<Card, Card>> rounds;
        vector<bool> used(2*n, false);

        bool impossible = false;
        for (int i = 0; i < 2*n && !impossible; ++i) {
            if (used[i]) continue;
            bool found = false;
            for (int j = i+1; j < 2*n && !found; ++j) {
                if (!used[j] && canBeat(cards[j], cards[i], trump)) {
                    rounds.push_back({cards[i], cards[j]});
                    used[i] = used[j] = true;
                    found = true;
                }
            }
            if (!found) impossible = true;
        }

        if (impossible) cout << "IMPOSSIBLE\n";
        else {
            for (auto& round : rounds) cout << round.first.rank << round.first.suit << ' ' << round.second.rank << round.second.suit << '\n';
        }
    }
    return 0;
}
