#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    int data;
};

int callByValue(int a) {
    cout << "Address callByValue: " << &a << "\n";
    cout << "Address Size: " << sizeof(a) << " bytes\n";
    return sizeof(a);
}

int callByReference(Test &obj) {
    cout << "Address callByReference: " << &obj << "\n";
    cout << "Address Size: " << sizeof(obj) << " bytes\n";
    return sizeof(obj);
}

int main() {
    int a = 5;
    cout << callByValue(a) << "\n";
    cout << "Address &a: " << &a <<"\n";
    cout << "ADD: " << callByValue(a) + sizeof(a)  << " bytes";

    cout << "\n\n==========================================\n\n";

    Test t;
    t.data = 5;
    cout << "Address &t: " << &t << "\n";
    cout << "Address &t.data: " << &t.data << "\n";
    cout << callByReference(t) << "\n";
    cout << "Size: " << sizeof(t) << " bytes\n";
    cout << "Size: " << sizeof(t.data) << " bytes\n";
    cout << "ADD: " << callByReference(t) + sizeof(t)  << " bytes" << "\n";
    cout << "ADD: " << callByReference(t) + sizeof(t.data)  << " bytes" << "\n";
    return 0;
}