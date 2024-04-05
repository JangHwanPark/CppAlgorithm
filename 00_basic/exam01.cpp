#include <bits/stdc++.h>
using namespace std;

struct Node {
    string data;
    Node *next;
};


int main() {
    Node node;
    node.data = "data1";
    cout << &node.data << '\n';
    return 0;
}