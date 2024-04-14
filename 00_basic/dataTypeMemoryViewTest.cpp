#include <bits/stdc++.h>
using namespace std;

class ExampleClass {
public:
    int data = 42;
};

struct ExampleStruct {
    double data = 3.14;
};

int main() {
    // 기본 데이터 타입
    int a = 10;
    double b = 3.14159;
    float c = 2.718f;
    char d = 'A';
    string e = "hello";
    long f = 1000000000L;
    long long g = 1000000000000LL;
    long int h = 100000L;

    // 복합 데이터 타입
    array<int, 3> arr = {1, 2, 3};
    ExampleClass obj;
    ExampleStruct st;

    // 값과 주소 출력
    cout << "int a: " << a << ", Address of a: " << &a << endl;
    cout << "double b: " << b << ", Address of b: " << &b << endl;
    cout << "float c: " << c << ", Address of c: " << &c << endl;
    cout << "char d: " << d << ", Address of d: " << &d << endl;
    cout << "string e: " << e << ", Address of e: " << &e << endl;
    cout << "long f: " << f << ", Address of f: " << &f << endl;
    cout << "long long g: " << g << ", Address of g: " << &g << endl;
    cout << "long int h: " << h << ", Address of h: " << &h << endl;
    cout << "array arr[0]: " << arr[0] << ", Address of arr: " << &arr << endl;
    cout << "ExampleClass obj.data: " << obj.data << ", Address of obj: " << &obj << endl;
    cout << "ExampleStruct st.data: " << st.data << ", Address of st: " << &st << endl;
    return 0;
}