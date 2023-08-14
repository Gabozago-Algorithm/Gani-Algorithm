// [11170] 0의 개수

/*
N부터 M까지의 수들을 종이에 적었을 때 
종이에 적힌 0들을 세는 프로그램을 작성하라.

예를 들어, N, M이 각각 0, 10일 때 0을 세면
0에 하나, 10에 하나가 있으므로 답은 2이다.

입력
첫 번째 줄에 테스트 케이스의 수 T가 주어진다.
각 줄에는 N과 M이 주어진다.
1 ≤ T ≤ 20
0 ≤ N ≤ M ≤ 1,000,000

출력
각각의 테스트 케이스마다 N부터 M까지의 0의 개수를 출력한다.
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
	// 테스트 케이스의 수
	int t = 0;
	cin >> t;

	while (t--) {
		int n = 0, m = 0;
		cin >> n >> m;

		int cnt = 0;
		for (int i = n; i <= m; i++) {
			string temp = to_string(i);

			for (int j = 0; j < temp.size(); j++) {
				if (temp[j] == '0') {
					// N부터 M까지의 0의 개수
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}