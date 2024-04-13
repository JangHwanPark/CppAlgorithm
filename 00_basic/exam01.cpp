#include <bits/stdc++.h>
using namespace std;

struct StructNode {
    string data;
    StructNode *next{};
};

class ClassNode {
public:
    int data;
    ClassNode* next;

    // 생성자
    ClassNode(int data) {
        this->data = data;      // data 변수에 매개변수 data 할당
        this->next = nullptr;   // next 변수에 null 포인터 할당(null 값)
    }
};


int main() {
    StructNode node;
    node.data = "data1";
    cout << &node.data << " " << node.data << " Type: " << typeid(node.data).name() << '\n';

    StructNode node2;
    node2.data = "data2";
    cout << &node2.data << " " << node2.data << " Type: " << typeid(node2.data).name() << '\n';

    // ClassNode의 타입 정보를 출력
    ClassNode cnode(100);
    cout << "ClassNode data type: " << typeid(cnode.data).name() << '\n';

    return 0;
}