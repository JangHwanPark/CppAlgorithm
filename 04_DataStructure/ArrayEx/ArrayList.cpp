#include <bits/stdc++.h>

using namespace std;

class ArrayList {
private:
    int *arr;   // 배열을 가리키는 포인터
    int capacity; // 배열의 최대 크기
    int current; // 현재 배열에 저장된 요소의 개수

public:
    // 생성자
    ArrayList(int size = 10) : capacity(size), current(0) {
        arr = new int[capacity]; // 동적 메모리 할당 (new)
    }

    // 소멸자
    ~ArrayList() {
        delete[] arr; // 동적 메모리 해제 (delete)
    }
};

int main() {
    ArrayList arrayList(10);
    //for (int i = 0; i < 10; i++) cout << arrayList.arr[i] << " ";
    return 0;
}