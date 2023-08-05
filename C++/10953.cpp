// [10953] A+B - 6

/*
두 정수 A와 B를 입력받은 다음, 
A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며,
각 줄에 A와 B가 주어진다. A와 B는 콤마(,)로 구분되어 있다.
(0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.
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
	int T;
	int a, b, result;
	char comma;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> comma >> b;
		result = a + b;
		cout << result << endl;
	}
	return 0;
}