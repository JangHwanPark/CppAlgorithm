#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push (int x) {
    dat[pos++] = x;
    //pos++;
    cout << dat[0] << dat[1] << dat[2] << ", pos: " << pos << " " << "\n";
}

void pop() {
    pos--;
    cout << dat[0] << dat[1] << dat[2] << ", pos: " << pos << " " << "\n";
}

void peek() {

}

int top() {
    return dat[pos - 1];
}

int main() {
    push(5); push(4); push(3);
    cout << top() << '\n'; // 3
    pop(); pop();
    cout << top() << '\n'; // 5
    push(10); push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}