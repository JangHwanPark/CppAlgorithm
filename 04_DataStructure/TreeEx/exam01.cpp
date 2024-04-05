/**
 * 용어 - Tree (node, edge, path, level, depth, Root ,Parent, Child, Sibling, Leaf(Terminal), Internal)<br>
 * 트리 노드 구현 방법<br>
 * 1. 클래스, 구조체로 노드 생성<br>
 * 2. 입력받을 데이터 변수 생성<br>
 * 3. 생성할 구조체, 클래스 타입으로 왼쪽, 오른쪽 노드 생성하고 포인터를 사용해 메모리 주소를 참조한다.<br>
 *
 * C++ 에서 기본적인 구조체, 클래스 차이점은 접근제어자임
 */
#include <bits/stdc++.h>
using namespace std;

// 1. 구조체로 트리노드 구현
struct node {
    int data;    // 입력받은 데이터
    node* left;  // 왼쪽 노드 포인터(edge)로 연결
    node* right; // 오른쪽 노드 포인터(edge)로 연결
};

// 2. 클래스로 트리노드 구현
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
};

int main() {

}