// [2739] 구구단

/*
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램
출력 형식에 맞춰서 출력

입력
첫째 줄에 N이 주어진다.
N은 1보다 크거나 같고, 9보다 작거나 같다.

출력
출력형식과 같게 N*1부터 N*9까지 출력한다.
*/

// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	for (int i = 1; i < 10; i++) {
		cout << n << " * " << i << " = " << (i * n) << "\n";
	}
	return 0;
}
