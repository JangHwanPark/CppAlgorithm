#include <bits/stdc++.h>
using namespace std;

void specifySize(int n) {
    // n개의 요소를 가진 벡터 생성
    vector<int> num(n);
    for (int i = 0; i < n; i++) cin >> num[i];
    for (int i = 0; i < n; i++) cout << num[i] << " ";
    cout << "\n"; // 결과를 확인하기 위한 출력
}

void usePushBack(int n) {
    // 빈 벡터 생성
    vector<int> num;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    for (auto item : num) cout << item << " ";
    cout << "\n"; // 결과를 확인하기 위한 출력
}

int main() {
    int n;
    cout << "요소의 갯수 입력: ";
    cin >> n; // n에 대한 입력 받기
    cout << "Specify size method: " << "\n";
    specifySize(n); // n을 인자로 specifySize 함수 호출
    cout << "Use push_back method: " << "\n";
    usePushBack(n); // n을 인자로 usePushBack 함수 호출
    return 0;
}