// [1978] 소수 찾기

/*
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성

입력
첫 줄에 수의 개수 N이 주어진다. 
N은 100이하이다. 
다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수

출력
주어진 수들 중 소수의 개수를 출력
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n, a;
	int cnt = 0, result = 0;
	cin >> n;

	// 소수는 1과 자기 자신으로만 나누어지는 1보다 큰 정수
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 1; j <= a; j++) {
			if (a % j == 0) {
				cnt++;
			}
		}
		// 나눠떨어지는 개수가 2개면
		if (cnt == 2) {
			result++;
		}
		cnt = 0;
	}

	cout << result;
}