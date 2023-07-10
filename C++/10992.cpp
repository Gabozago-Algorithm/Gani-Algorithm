// [10992] 별 찍기 - 17

/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}

		if (i == 1 || i == n) {
			for (int j = 1; j <= (i - 1) * 2 + 1; ++j) {
				cout << "*";
			}
		}
		else {
			cout << "*";
			for (int j = 1; j <= (i - 1) * 2 - 1; ++j) {
				cout << " ";
			}
			cout << "*";
		}

		cout << "\n";
	}

}