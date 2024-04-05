#include <bits/stdc++.h>
using namespace std;

struct Person {
    string name;
    int age;
    Person(string n, int a) : name(std::move(n)), age(a) {}
};

// int 타입을 사용하는 스택
void integerTypeStack() {
    stack<int> s;

    // int 타입 요소 추가
    s.push(1);
    s.push(2);
    s.push(3);

    // 맨 위의 요소 조회 및 제거
    while (!s.empty()) {
        cout << "Top element: " << s.top() << "\n";
        s.pop();
    }
}

// char 타입을 사용하는 스택
void charTypeStack() {
    stack<char> s;

    // char 타입 요소 추가
    s.push('A');
    s.push('B');
    s.push('C');

    // 맨 위의 요소 조회 및 제거
    while (!s.empty()) {
        cout << "Top element: " << s.top() << "\n";
        s.pop();
    }
}

// string 타입을 사용하는 스택
void stringTypeStack() {
    stack<string> s;

    // string 타입 요소 추가
    s.push("Hello");
    s.push("World");
    s.push("!");

    // 맨 위의 요소 조회 및 제거
    while (!s.empty()) {
        cout << "Top element: " << s.top() << "\n";
        s.pop();
    }
}

// 사용자 정의 타입을 사용하는 스택
void customTypeStack() {
    stack<Person> s;

    // 사용자 정의 타입 요소 추가
    s.push(Person("Alice", 30));
    s.push(Person("Bob", 25));
    s.push(Person("Charlie", 35));

    // 맨 위의 요소 조회 및 제거
    while (!s.empty()) {
        Person p = s.top();
        cout << "Top element: " << p.name << ", " << p.age << "\n";
        s.pop();
    }
}

int main() {
    // 각 타입의 스택을 테스트
    cout << "Integer Type StackEx:" << "\n";
    integerTypeStack();

    cout << "\nChar Type StackEx:" << "\n";
    charTypeStack();

    cout << "\nString Type StackEx:" << "\n";
    stringTypeStack();
}