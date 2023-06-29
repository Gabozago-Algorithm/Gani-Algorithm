// [2742] 기찍 N 

/*
자연수 N이 주어졌을 때,
N부터 1까지 한 줄에 하나씩 출력하는 프로그램

입력
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다

출력
첫째 줄부터 N번째 줄 까지 차례대로 출력
*/

// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	for (int i = n; i > 0; i--) {
		cout << i << "\n";
	}
	return 0;
}
