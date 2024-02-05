#include <bits/stdc++.h>
using namespace std;

void push(int value) {

}

void pop() {

}

void front() {

}

int back() {

}

int main(void) {
    push(10); push(20); push(30);
    cout << front() << '\n'; // 10
    cout << back() << '\n'; // 30
    pop(); pop();
    push(15); push(25);
    cout << front() << '\n'; // 30
    cout << back() << '\n'; // 25
}