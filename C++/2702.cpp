// [2702] 초6 수학

/*
두 정수 a와 b 최소공배수는 두 수의 공통된 배수 중 가장 작은 수이고,
최대공약수는 두 수의 공통된 약수중 가장 큰 수이다.
a와 b가 주어졌을 때, 최소공배수와 최대공약수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T(1<=T<=1,000)가 주어진다.
각 테스트 케이스는 두 정수 a와 b로 이루어져 있고, 공백으로 구분되어 있다.
(1 <= a,b <= 1,000)

출력
각 테스트 케이스에 대해 최소공배수와 최대공약수를 차례대로 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

// 최대공약수
int big(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	return big(b, a % b);
}

// 최소공배수 = A * B / 최대공약수
int small(int a, int b) {
	return a * b / big(a, b);
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		cout << small(x, y) << " " << big(x, y) << "\n";
	}

}