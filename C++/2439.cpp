// [2439] 별 찍기 - 2

/*
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, 
N번째 줄에는 별 N개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
