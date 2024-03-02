#include <bits/stdc++.h>
using namespace std;

/**
 * 배열을 사용하는 투 포인터 기법을 시험하는 함수
 * 배열 내에서 두 수의 합이 특정 목표값(target)과 일치하는 조합을 찾는다
 * 찾으면 해당 조합을 출력하고, 없으면 찾을 수 없다는 메시지를 출력
 *
 * @param arr[]: 검사할 정수 배열
 * @param n: 배열의 크기
 * @param target: 찾고자 하는 두 수의 합
 */
void twoWayArrayPointerTestCase(const int arr[], int n, int target) {
    int start = 0, end = n - 1;
    bool found = false;

    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == target) {
            cout << "두 수의 합이 " << target << "인 조합 (배열): " << arr[start] << " + " << arr[end] << "\n";
            found = true;
            break;
        }
        else if (sum < target) start++;
        else end--;
    }

    if (!found) cout << "해당 조합을 찾을 수 없습니다. (배열)" << "\n";
}

/**
 * 배열을 순회하는 한 방향 포인터 기법을 시험하는 함수
 * 배열 내에서 특정 값(target)을 가진 요소를 찾는다
 * 찾으면 해당 요소의 위치를 출력하고, 없으면 찾을 수 없다는 메시지를 출력
 *
 * @param arr[]: 검사할 정수 배열
 * @param n: 배열의 크기
 * @param target: 찾고자 하는 값
 */
void oneWayArrayPointerTestCase(const int arr[], int n, int target) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "값 " << target << "을(를) 위치 " << i << "에서 찾았습니다. (배열)" << "\n";
            found = true;
            break;
        }
    }

    if (!found) cout << "해당 값을 찾을 수 없습니다. (배열)" << "\n";
}

/**
 * 벡터를 사용하는 투 포인터 기법을 시험하는 함수
 * 벡터 내에서 두 수의 합이 특정 목표값(target)과 일치하는 조합을 찾는다
 * 찾으면 해당 조합을 출력하고, 없으면 찾을 수 없다는 메시지를 출력
 *
 * @param vec: 검사할 정수 벡터의 참조
 * @param target: 찾고자 하는 두 수의 합
 */
void twoWayVectorPointerTestCase(vector<int>& vec, int target) {
    size_t start = 0, end = vec.size() - 1;
    bool found = false;

    while (start < end) {
        int sum = vec[start] + vec[end];
        if (sum == target) {
            cout << "두 수의 합이 " << target << "인 조합 (벡터): " << vec[start] << " + " << vec[end] << "\n";
            found = true;
            break;
        }

        else if (sum < target) start++;
        else end--;
    }

    if (!found) cout << "해당 조합을 찾을 수 없습니다. (벡터)" << "\n";
}

/**
 * 벡터를 순회하는 한 방향 포인터 기법을 시험하는 함수
 * 벡터 내에서 특정 값(target)을 가진 요소를 찾는다.
 * 찾으면 해당 요소의 위치를 출력하고, 없으면 찾을 수 없다는 메시지를 출력
 *
 * @param vec: 검사할 정수 벡터의 참조
 * @param target: 찾고자 하는 값
 */
void oneWayVectorPointerTestCase(vector<int>& vec, int target) {
    bool found = false;
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            cout << "값 " << target << "을(를) 위치 " << i << "에서 찾았습니다. (벡터)" << "\n";
            found = true;
            break;
        }
    }

    if (!found) cout << "해당 값을 찾을 수 없습니다. (벡터)" << "\n";
}

int main() {
    /**
     * arr - 입력 배열
     * n - 배열의 크기
     * vec - 입력 벡터
     */
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec = {2, 3, 5, 7, 11};

    // 테스트 케이스 실행
    twoWayArrayPointerTestCase(arr, n, 9);
    oneWayArrayPointerTestCase(arr, n, 3);
    twoWayVectorPointerTestCase(vec, 10);
    oneWayVectorPointerTestCase(vec, 6);
    return 0;
}