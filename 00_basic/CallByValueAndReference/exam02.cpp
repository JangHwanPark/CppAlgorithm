#include <bits/stdc++.h>

using namespace std;

int returnCallByValue(int a) {
    a -= 12;
    return a;
    // return a;
}

void voidCallByValue(int a) {
    cout << &a << "\n";
    cout << "함수 a값: " << a << "\n";
}

int returnCallByReferenceB(int &b) {
    //b -= 50;
    //return b;
    return b - 50;
}

int returnCallByReferenceC(int &c) {
    c -= 20;
    return c - 5;
}

int returnCallByReferenceD(int &d) {
    d -= 5;
    return d;
}

int main() {
    int a = 123;    // 7b
    int *b = &a;    // 변수 b 는 변수 a 의 메모리 주소값을 저장중
    int *dynamicMemoryRef = new int(a);
    int c = 100;
    int d = 10;
    cout << "a : " << a << "\n";         // 변수 a의 값을 출력
    cout << "&a : " << &a << "\n\n";     // 변수 a의 주소를 출력

    cout << "*b : " << *b << "\n";       // 포인터 b가 가리키는 값 (a의 값)을 출력
    cout << "b : " << b << "\n";         // 포인터 b의 값을 (a의 주소) 출력
    cout << "&b : " << &b << "\n\n";     // 변수 b의 주소를 출력 (b 자체의 주소)

    cout << "c : " << c << "\n";         // 변수 a의 값을 출력
    cout << "&c : " << &c << "\n\n";     // 변수 a의 주소를 출력

    cout << "d : " << d << "\n";
    cout << "&d : " << &d << "\n\n";

    // dynamicMemoryRef가 가리키는 값 (a의 복사된 값)을 출력
    cout << "*dynamicMemoryRef : " << *dynamicMemoryRef << "\n";

    // dynamicMemoryRef의 값 (할당된 메모리의 주소)을 출력
    cout << "dynamicMemoryRef : " << dynamicMemoryRef;

    cout << "\n\n================ 함수 실행 ===================\n\n";

    // Call By Value 는 복사본을 전달하기 때문에 원본값이 유지된다.
    cout << "void f(a): ";voidCallByValue(a);
    cout << "f(a): " << returnCallByValue(a);
    cout << "\n";
    cout << "a : " << a << "\n";
    cout << "&a : " << &a << "\n\n";

    // 참조로 변수를 받아도 값을 변경하려면 함수 내부에서 쓰기작업을 해야된다.
    cout << "f(*b): " << returnCallByReferenceB(*b) << "\n";
    cout << "a : " << a << "\n";
    cout << "*b = a : " << *b << "\n";
    cout << "b = &a : " << b << "\n";
    cout << "&a = b : " << &a << "\n";
    cout << "&b : " << &b << "\n\n";

    // 메모리 주소 변경 없음 ( c -= 20; , return c - 5 = 75; int c = 80 )
    cout << "f(c): " << returnCallByReferenceC(c) << "\n";
    cout << "c : " << c << "\n";
    cout << "&c : " << &c << "\n\n";

    cout << "f(d): " << returnCallByReferenceD(d) << "\n";
    cout << "d : " << d << "\n";
    cout << "&d : " << &d << "\n";
    return 0;
}