// [11365] !밀비 급일

/*
당신은 길을 가다가 이상한 쪽지를 발견했다. 
그 쪽지에는 암호가 적혀 있었는데, 
똑똑한 당신은 암호가 뒤집으면 해독된다는 것을 발견했다.

이 암호를 해독하는 프로그램을 작성하시오

입력
한 줄에 하나의 암호가 주어진다.
암호의 길이는 500을 넘지 않는다.
마지막 줄에는 "END"가 주어진다. (END는 해독하지 않는다.)

출력
각 암호가 해독된 것을 한 줄에 하나씩 출력한다.
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
	string str;

	while (1) {
		// string형을 받을 때 쓰고 
		// 공백이 포함된 문자열을 입력
		getline(cin, str);
		if (str == "END") {
			break;
		}

		reverse(str.begin(), str.end());
		cout << str << endl;
	}

	return 0;
}