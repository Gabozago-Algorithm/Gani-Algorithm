// [5586] JOI와 IOI

/*
입력으로 주어지는 문자열에서 연속으로 3개의 문자가 JOI 또는 IOI인 곳이 
각각 몇 개 있는지 구하는 프로그램을 작성하시오. 
문자열은 알파벳 대문자로만 이루어져 있다.
예를 들어, 아래와 같이 "JOIOIOI"에는 JOI가 1개, IOI가 2개 있다.

입력
첫째 줄에 알파벳 10000자 이내의 문자열이 주어진다

출력
첫째 줄에 문자열에 포함되어 있는 JOI의 개수,
둘째 줄에 IOI의 개수를 출력한다
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

int main() {
	string str;
	cin >> str;

	int jcnt = 0;
	int icnt = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I') {
			jcnt ++;
		}
		if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') {
			icnt ++;
		}
	}
	cout << jcnt << "\n";
	cout << icnt << "\n";
}