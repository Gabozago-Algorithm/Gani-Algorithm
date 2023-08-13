// [2822] 점수 계산

/*
상근이는 퀴즈쇼의 PD이다. 
이 퀴즈쇼의 참가자는 총 8개 문제를 푼다. 
참가자는 각 문제를 풀고, 그 문제를 풀었을 때 얻는 점수는 문제를 풀기 시작한 시간부터 
경과한 시간과 난이도로 결정한다. 

문제를 풀지 못한 경우에는 0점을 받는다. 
참가자의 총 점수는 가장 높은 점수 5개의 합이다.

입력
8개 줄에 걸쳐서 각 문제에 대한 참가자의 점수가 주어진다. 
점수는 0보다 크거나 같고, 150보다 작거나 같다. 
모든 문제에 대한 점수는 서로 다르다. 
입력으로 주어지는 순서대로 1번 문제, 2번 문제, ... 8번 문제이다.

출력
첫째 줄에 참가자의 총점을 출력한다. 
둘째 줄에는 어떤 문제가 최종 점수에 포함되는지를 공백으로 구분하여 출력한다. 
출력은 문제 번호가 증가하는 순서이어야 한다.
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
	int num;
	int sum = 0;
	vector<pair<int, int> > v;
	vector<int> index;

	for (int i = 1; i <= 8; ++i) {
		// 8개 줄에 걸쳐서 각 문제에 대한 참가자의 점수
		cin >> num;
		v.push_back(make_pair(num, i));
	}

	sort(v.begin(), v.end(), greater<pair<int, int> >());

	for (int i = 0; i < 5; ++i) {
		sum += v[i].first;
		index.push_back(v[i].second);
	}

	// 참가자의 총점
	cout << sum << endl;

	sort(index.begin(), index.end());

	for (int i = 0; i < 5; ++i) {
		// 어떤 문제가 최종 점수에 포함되는지
		cout << index[i] << " ";
	}
	cout << endl;
	return 0;
}