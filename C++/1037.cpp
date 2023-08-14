// [1037] 약수

/*
양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다. 
어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N의 진짜 약수의 개수가 주어진다. 
이 개수는 50보다 작거나 같은 자연수이다. 
둘째 줄에는 N의 진짜 약수가 주어진다.
1,000,000보다 작거나 같고, 2보다 크거나 같은 자연수이고, 중복되지 않는다.

출력
첫째 줄에 N을 출력한다. N은 항상 32비트 부호있는 정수로 표현할 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
#include <queue>
using namespace std;

int main() {
    int arr[51];
    int n;
    // 진짜 약수의 개수
    cin >> n;

    for (int i = 0; i < n; i++) {
        // N의 진짜 약수
        cin >> arr[i];
    }

    // 1과 N은 뺀 나머지가 진짜 약수
    sort(arr, arr + n);
    
    // 최솟값과 최댓값을 곱한게 N
    int ans = arr[0] * arr[n - 1];
    cout << ans;
	return 0;
}