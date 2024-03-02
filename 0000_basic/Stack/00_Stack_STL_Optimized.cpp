#include <bits/stdc++.h>
using namespace std;

// Person 구조체: 사람을 나타내는 이름과 나이를 멤버로 가짐
struct Person {
    string name; // 사람의 이름
    int age;     // 사람의 나이
    // 생성자: 객체가 생성될 때 이름과 나이를 초기화
    Person(string n, int a) : name(n), age(a) {}
};

// processStack 템플릿 함수: 스택의 모든 요소를 처리(출력)하는 함수
template<typename T>
void processStack(stack<T> stack) {
    // 스택이 비어있지 않은 동안 반복
    while (!stack.empty()) {
        // T가 Person 타입인 경우
        if constexpr (is_same_v<T, Person>) {
            auto& p = stack.top(); // 스택의 맨 위 요소 참조
            // Person 타입 요소의 이름과 나이 출력
            cout << "Top element: " << p.name << ", " << p.age << "\n";
        } else {
            // 기본 타입(int, char, string 등) 요소의 값 출력
            cout << "Top element: " << stack.top() << "\n";
        }
        // 스택에서 맨 위 요소 제거
        stack.pop();
    }
}

int main() {
    // int 타입 스택 초기화 및 요소 추가
    stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    processStack(intStack); // int 스택 처리

    // char 타입 스택 초기화 및 요소 추가
    stack<char> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');
    processStack(charStack); // char 스택 처리

    // string 타입 스택 초기화 및 요소 추가
    stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("!");
    processStack(stringStack); // string 스택 처리

    // Person 타입 스택 초기화 및 요소 추가
    stack<Person> personStack;
    personStack.push(Person("Alice", 30));
    personStack.push(Person("Bob", 25));
    personStack.push(Person("Charlie", 35));
    processStack(personStack); // Person 스택 처리

    return 0;
}