// [2747] 피보나치 수

/*
피보나치 수는 0과 1로 시작한다. 0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1이다.
그 다음 2번째 부터는 바로 앞 두 피보나치 수의 합이 된다.

이를 식으로 써보면 Fn = Fn-1 + Fn-2 (n ≥ 2)가 된다.

n=17일때 까지 피보나치 수를 써보면 다음과 같다.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성

입력
첫째 줄에 n이 주어진다. n은 45보다 작거나 같은 자연수

출력
첫째 줄에 n번째 피보나치 수를 출력한다
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	long long DP[45];

	cin >> n;

	DP[0] = 0;
	DP[1] = 1;

	// DP[i] = DP[i - 1] + DP[i - 2];
	// 현재 위치의 값은 이전과, 그 이전의 값을 더한 값
	for (int i = 2; i <= n; ++i) {
		DP[i] = DP[i - 1] + DP[i - 2];
	}

	cout << DP[n] << endl;

	return 0;
}