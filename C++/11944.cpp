// [11944] NN

/*
문제는 매우 간단하다.
N을 N번 출력하는 프로그램을 작성하여라. 
다만, 답이 길어지는 경우 답의 앞 M자리만 출력한다.

입력
첫 번째 줄에는 N, M이 주어진다. 
(1 ≤ N, M ≤ 2016)

출력
N을 N번 출력한다.
만약 답이 길어지면 답의 앞 M자리를 출력한다.
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
	string n;
	int m;
	cin >> n >> m;
	string str;

	for (int i = 0; i < stoi(n); i++) {
		str += n;
	}
	if (str.length() > m) {
		cout << str.substr(0, m);
	}
	else {
		cout << str;
	}
	return 0;
}