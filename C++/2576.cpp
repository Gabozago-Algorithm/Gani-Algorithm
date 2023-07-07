// [2576] 홀수

/*
7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고, 
고른 홀수들 중 최솟값을 찾는 프로그램을 작성하시오.

예를 들어, 7개의 자연수 12, 77, 38, 41, 53, 92, 85가 주어지면 이들 중 홀수는 77, 41, 53, 85이므로 그 합은
77 + 41 + 53 + 85 = 256 이 되고,
41 < 53 < 77 < 85 이므로 홀수들 중 최솟값은 41이 된다.

입력
입력의 첫째 줄부터 일곱 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100보다 작다

출력
홀수가 존재하지 않는 경우에는 첫째 줄에 -1을 출력한다. 
홀수가 존재하는 경우 첫째 줄에 홀수들의 합을 출력하고, 둘째 줄에 홀수들 중 최솟값을 출력한다
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x, sum = 0, min = 100;

	for (int i = 0; i < 7; i++) {
		cin >> x;

		if (x % 2 != 0) {
			sum += x;

			if (min > x) {
				min = x;
			}
		}
	}

	// 소수가 없다면
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << endl;
		cout << min;
	}
}