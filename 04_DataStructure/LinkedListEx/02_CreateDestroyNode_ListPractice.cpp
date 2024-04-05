#include <bits/stdc++.h>
using namespace std;

// int(4byte) + ptr(8byte)
struct Node {
    int data;
    Node *next;
};

// 노드 생성
Node* SLL_CreateNode(int NewData) {
    Node* NewNode = new Node;   // 새로운 노드 포인터 생성
    NewNode->data = NewData;    // 매개변수의 값을 노드의 데이터 필드에 저장
    NewNode->next = nullptr;    // 다음 노드를 가리키는 포인터 초기화
    return NewNode;             // 생성된 노드의 포인터 반환
}

// 노드 소멸
void SLL_DestroyNode(Node* Node) {
    delete Node; // 메모리에서 노드 해제
}

int main() {
    // 노드 생성 (head)[data | pointer] -> nullptr
    cout << "===== 노드 생성 (head)[data | pointer] -> ... =====" << "\n";
    Node* HeadNode = SLL_CreateNode(1);
    cout << "NodeData: " << HeadNode->data << "\n";
    cout << "HeadNode->next: " << HeadNode->next << "\n";

    // 두 번째 노드 생성
    Node* SecondNode = SLL_CreateNode(2);

    /* HeadeNode 다음포인터에 SecondNode 연결
     * (head)[data | pointer] -> (second)[data | ptr] -> nullptr */
    HeadNode->next = SecondNode;
    cout << "HeadNode->next: " << HeadNode->next << "\n";
    cout << "NodeData: " << SecondNode->data << "\n";
    cout << "SecondNode->next: " << SecondNode->next << "\n";
    cout << "\n";

    // 구조체와 생성된 노드의 크기 (메모리 사이즈)
    cout << "===== 구조체와 생성된 노드의 크기 (메모리 사이즈) =====" << "\n";
    cout << "Struct Size(Memory): " << sizeof(Node) << "\n";
    cout << "Node Size(Memory): " << sizeof(HeadNode->data) << "\n";

    // 노드 소멸 (메모리에서 제거)
    SLL_DestroyNode(HeadNode);
    SLL_DestroyNode(SecondNode);
}