#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 1, j = 1;
    int res1 = 2 * ++i;  // i는 먼저 2로 증가하고, 그 후에 2*2가 계산되어 res1은 4가 됨
    int res2 = 2 * j++;  // j는 현재 값 1을 사용해 2*1이 계산된 후, j가 증가하므로 res2는 2가 됨
    cout << res1 << " " << res2 << "\n\n";

    int arr[5] = {1, 2, 3, 4, 5};
    int i1 = 0;
    int tc1 = ++i1;
    cout << tc1 << "\n";

    int a = arr[tc1];  // 'i'가 먼저 1로 증가하고, arr[1]의 값인 2가 'a'에 할당
    cout << "a = arr[++i]: " << a << "\n";

    int j1 = 0;
    int tc2 = j1++;
    cout << tc2 << "\n";

    int b = arr[tc2];  // 'j'의 현재 값인 0을 사용해 arr[0]의 값인 1이 'b'에 할당된 후, 'j'가 증가
    cout << "a = arr[i++]: "<< b << "\n";
    return 0;
}