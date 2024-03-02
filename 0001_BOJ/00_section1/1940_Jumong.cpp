#include <bits/stdc++.h>
using namespace std;

/**
 * n: 입력받을 정수의 개수
 * m: 두 수의 합으로 만들고자 하는 목표값
 * cnt: 목표값 m을 만족시키는 두 수의 조합의 개수를 세는 카운터
 */
int n, m, cnt = 0;

void test() {
    cin >> n;
    cin >> m;

    /**
     * size_t를 사용하면 start와 endIndex변수의 크기는 num과 같다.
     * num은 동적배열이라 int로 선언시 오류가 발생할 수 있음
     *
     * num : n개의 재료들이 가진 고유한 번호 (n을 입력 받은 후에 벡터 크기를 설정)
     * start : 현재 검토 중인 수열의 시작 부분을 가리키는 포인터(인덱스)
     * end : 현재 검토 중인 수열의 끝 부분을 가리키는 포인터(인덱스)
     */
    vector<int> num(n);
    size_t start = 0, endIndex = num.size() - 1;
    for (int i = 0; i < n; i++) cin >> num[i];
    sort(num.begin(), num.end());

    /**
     * 투 포인터를 이용해 벡터 내 두 수의 합이 m과 일치하는 조합의 개수를 계산
     * 시작 인덱스(start)가 끝 인덱스(endIndex)로 배열을 탐색하고,
     * 두 수의 합이 m과 일치하면 cnt를 증가시키고, 범위를 좁히면서(start증가, endIndex감소) 추가적으로 조합을 찾는다.
     * 합이 m보다 작으면 start를 증가시켜 합을 늘리고,
     * 합이 m보다 크면 endIndex를 감소시켜 합을 줄인다.
     * 이 과정은 start가 endIndex보다 작을 때까지 반복된다.
     */
    while (start < endIndex) {
        int sum = num[start] + num[endIndex];
        if (sum == m) {
            cnt++;
            start++;
            endIndex--;
        }
        else if (sum < m) start++;
        else endIndex--;
    }

    cout << "만들수 있는 갑옷의 수 : " << cnt;
}

int main() {
    test();
    return 0;
}