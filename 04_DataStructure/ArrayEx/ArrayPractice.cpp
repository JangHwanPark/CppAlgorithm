#include <bits/stdc++.h>
using namespace std;

void push(int a[], int data, int& length) {
    length++;
    a[length - 1] = data;
}

void pop(int a[], int& length) {
    length--;
}

void insert(int a[], int index, int data, int& length) {
    // 삽입할 위치부터 마지막 요소까지 뒤로 한칸씩 밀기(복사 붙이기)
    // 배열 뒤부터 삽일할 위치까지 순회한다.(앞부터 돌면 값이 덮어씌워짐)
    for (int i = length; i > index; i--) {
        a[i] = a[i - 1];    // 현재 위치의 요소를 뒤로 밀기(복사 붙이기)
    }

    // 삽입할 위치에 새로운 데이터 삽입
    a[index] = data;

    // 저장할 요소를 위해 공간 확보
    length++;
}

void remove(int a[], int index, int& length) {
    // 삭제할 요소의 다음 요소부터 배열의 끝요소까지 앞으로 당긴다.(복사 붙이기)
    // 삭제할 위치부터 마지막 요소까지 순회.
    for (int i = index; i < length; i++) {
        // 배열의 현재요소에 다음 요소의 값을 할당(앞으로 당기기)
        a[i] = a[i + 1];
    }

    // 배열의 길이(공간)를 축소
    length--;
}

void printArray(int a[], int length) {
    for (int i = 0; i < length; i++) cout << a[i] << " ";
}

int main() {
    int a[5] = {10, 2, 6};
    int length = 3;
    cout << "요소의 갯수: " << length << " 배열의 길이: " << length - 1 << "\n";

    cout << "배열의 요소: ";
    printArray(a, length);
    push(a, 5, length);
    cout << "\n";

    cout << "배열의 요소 추가: ";
    printArray(a, length);
    cout << "\n";

    pop(a, length);
    cout << "배열의 요소 삭제: ";
    printArray(a, length);
    cout << "\n";

    cout << "배열의 k번째 요소 삽입: ";
    insert(a, 2, 10, length);
    printArray(a, length);
    cout << "\n";

    cout << "배열의 k번째 요소 삭제: ";
    remove(a, 1, length);
    printArray(a, length);
    cout << "\n";
    return 0;
}