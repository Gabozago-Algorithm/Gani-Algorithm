// [2581] 소수

/*
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성

입력
입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
M과 N은 10,000이하의 자연수이며, M은 N보다 작거나 같다.

출력
M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다.
단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int m, n;
	int sum = 0, min = -1;
	int cnt = 0;
	cin >> m >> n;

	// 소수는 1과 자기 자신으로만 나누어지는 1보다 큰 정수
	for (int i = m; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}
		// 나눠떨어지는 개수가 2개면
		if (cnt == 2) {
			if (min == -1) {
				min = i;
			}
			sum += i;
		}
		cnt = 0;
	}

	if (min == -1) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << min << "\n";
	}
}