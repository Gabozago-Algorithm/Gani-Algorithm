// [8393] 합

/*
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
1부터 n까지 합을 출력한다.
*/

// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int sum = 0;
	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}