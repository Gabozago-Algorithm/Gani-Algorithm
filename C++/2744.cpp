// [2744] 대소문자 바꾸기

/*
영어 소문자와 대문자로 이루어진 단어를 입력받은 뒤, 
대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 
단어의 길이는 최대 100이다.

출력
첫째 줄에 입력으로 주어진 단어에서 대문자는 소문자로, 
소문자는 대문자로 바꾼 단어를 출력한다.
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
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		// 대문자
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		// 소문자
		else {
			str[i] -= 32;
		}
	}

	cout << str;
    return 0;
}