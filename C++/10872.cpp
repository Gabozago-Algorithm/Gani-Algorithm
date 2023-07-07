// [10872] 팩토리얼

/*
0보다 크거나 같은 정수 N이 주어진다
이때, N!을 출력하는 프로그램을 작성

입력
첫째 줄에 정수 N(0 ≤ N ≤ 12)이 주어진다.

출력
첫째 줄에 N!을 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <stdio.h>
using namespace std;

int factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

int main()
{
	int n;
	cin >> n;

	cout << factorial(n);
}