// [11098] 첼시를 도와줘

/*
구단이 성적을 내지 못한다면 답은 새 선수 영입뿐
첼시가 리스트에서 가장 비싼 선수를 찾아낼 수 있도록 돕기

입력
첫 번째 줄에는 테스트 케이스의 개수 n이 주어진다 (n≤100)
각 테스트 케이스의 첫 번째 줄 p는 고려해야될 선수의 수이다 (1≤p≤100).
그 아래 p개의 줄에는 선수의 정보가 표시된다
각각의 줄은 선수의 가격 C 와 이름을 입력한다

출력
각각의 테스트 케이스에서 가장 비싼 선수의 이름을 출력
*/

#include <iostream>
using namespace std;

int main()
{
	// 테스트 케이스의 개수 n
	// p는 고려해야될 선수의 수
	int n;
	int p;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p;
		int a;
		string b;

		int maxScore = 0;
		string player;

		for (int j = 0; j < p; j++) {
			cin >> a >> b;
			if (a > maxScore) {
				maxScore = a;
				player = b;
			}
		}
		cout << player << endl;
	}
	return 0;
}