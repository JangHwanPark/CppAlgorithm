#include <bits/stdc++.h>

using namespace std;

int returnCallByValue(int a) {
    cout << "int 함수 a 주소 값: " << &a << "\n";
    return a;
}

void voidCallByValue(int a) {
    cout << "void 함수 a 주소 값: " << &a << "\n";
    cout << "함수 a값: " << a << "\n";
}

int main() {
    int a = 123;    // 7b
    int *b = &a;    // 변수 b 는 변수 a 의 메모리 주소값을 저장중
    int *dynamicMemoryRef = new int(a);
    cout << "a : " << a << "\n";    // 변수 a의 값을 출력
    cout << "&a : " << &a << "\n";  // 변수 a의 주소를 출력

    cout << "*b : " << *b << "\n";   // 포인터 b가 가리키는 값 (a의 값)을 출력
    cout << "b : " << b << "\n";    // 포인터 b의 값을 (a의 주소) 출력

    // dynamicMemoryRef가 가리키는 값 (a의 복사된 값)을 출력
    cout << "*dynamicMemoryRef : " << *dynamicMemoryRef << "\n";

    // dynamicMemoryRef의 값 (할당된 메모리의 주소)을 출력
    cout << "dynamicMemoryRef : " << dynamicMemoryRef << "\n";

    // Call By Fn
    voidCallByValue(a);
    cout << returnCallByValue(a) << "\n";
    return 0;
}