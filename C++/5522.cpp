// [5522] 카드 게임

/*
카드 게임은 5회의 게임으로 진행되며, 
그 총점으로 승부를 하는 게임이다.

JOI군의 각 게임의 득점을 나타내는 정수가 주어졌을 때, 
JOI군의 총점을 구하는 프로그램을 작성하라.

입력
표준 입력에서 다음과 같은 데이터를 읽어온다.
i 번째 줄(1 ≤ i ≤ 5)에는 정수 Ai가 적혀있다. 
이것은 i번째 게임에서의 JOI군의 점수를 나타낸다.

출력
표준 출력에 JOI군의 총점을 한 줄로 출력하라.
*/

// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += n;
	}
	cout << sum;
}