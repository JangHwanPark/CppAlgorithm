#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 1000;

class Stack {
private:
    int arr[MAX_SIZE];  // 스택을 저장할 배열
    int top;    // 스택의 맨 위 요소의 인덱스
    static Stack* instance; // 싱글턴 인스턴스를 위한 정적 멤버 변수

private:
    // 비공개 생성자
    Stack() {
        top = -1;
    }

public:
    // 싱글턴 인스턴스를 얻는 정적 메소드
    static Stack* getInstance() {
        if (instance == nullptr) instance = new Stack();
        return instance;
    }

    // Create: 요소 추가(push)
    void push(int x) {
        if (top < MAX_SIZE - 1) arr[++top] = x;
        else cout << "스택 오버플로우 발생!!" << "\n";
    }

    // Read: 맨 위 요소 확인(peek)
    int peek() {
        if (top >= 0) return arr[top];
        else {
            cout << "스택이 비어 있습니다." << "\n";
            return -1;
        }
    }

    // Delete: 맨 위 요소 제거(pop)
    void pop() {
        if (top >= 0) top--;
        else cout << "스택이 비어 있습니다." << "\n";
    }

    /**
     * 스택이 비어있는지 확인(empty)
     * 스택이 비어 있으면 true, 그렇지 않으면 false 반환
     */
    bool isEmpty() {
        return top < 0;
    }
};

// 싱글턴 인스턴스 초기화
Stack* Stack::instance = nullptr;

int main() {
    Stack* stk = Stack::getInstance();

    // 스택에 요소 추가
    stk->push(10);
    stk->push(20);

    // 스택의 맨 위 요소 확인
    cout << "최상위 요소 : " << stk->peek() << "\n";

    // 스택의 맨 위 요소 제거
    stk->pop();
    cout << "맨 위의 요소를 제거한 후, 최상위 요소 : " << stk->peek() << "\n";

    // 스택이 비어있는지 확인
    if (stk->isEmpty()) cout << "스택이 비어있습니다." << "\n";
    else cout << "스택에 값이 존재합니다." << "\n";
    return 0;
}