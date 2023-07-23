// [5523] 경기 결과

/*
A와 B가 게임을 한다. 게임은 N번의 라운드로 이루어져 있다. 
각 라운드에서는, 더 많은 점수를 얻은 사람이 그 라운드의 승자가 된다. 

A의 점수가 B의 점수보다 크면 i번째 라운드는 A의 승리이며,
B의 점수가 A의 점수보다 크면 i번째 라운드는 B의 승리
무승부인 경우에는 아무도 승리하지 않는다.

N번의 라운드에서의 A와 B의 점수가 주어졌을 때, 
A가 이긴 횟수와, B가 이긴 횟수를 출력하는 프로그램을 만들어라.

입력
첫째 줄에는 정수 N(1 ≤ N ≤ 1,000,000)이 주어진다.
둘째 줄부터는 정수 Ai, Bi (0 ≤ Ai, Bi ≤ 100)가 공백을 사이에 두고 차례대로 주어진다

출력
첫째 줄에 A가 이긴 횟수와 B가 이긴 횟수를 차례대로 출력하라.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

// 쿼터(Quarter, $0.25)의 개수, 다임(Dime, $0.10)의 개수, 니켈(Nickel, $0.05)의 개수, 페니(Penny, $0.01)
int arr[4] = { 25,10,5,1 };

int main() {
	int N;
	cin >> N;

	int ACnt = 0, BCnt = 0;

	for (int n = 0; n < N; n++)
	{
		int A, B;
		cin >> A >> B;

		if (A > B)
		{
			ACnt++;
		}
		else if (A < B)
		{
			BCnt++;
		}
	}

	cout << ACnt << " " << BCnt << "\n";
	return 0;
}