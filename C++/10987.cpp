// [10987] 모음의 개수

/*
알파벳 소문자로만 이루어진 단어가 주어진다. 
이때, 모음(a, e, i, o, u)의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어가 주어진다. 
단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 
알파벳 소문자로만 이루어져 있다.

출력
첫째 줄에 모음의 개수를 출력한다.
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

	int result = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') {
			result += 1;
		}
		else if (str[i] == 'e') {
			result += 1;
		}
		else if (str[i] == 'i') {
			result += 1;
		}
		else if (str[i] == 'o') {
			result += 1;
		}
		else if (str[i] == 'u') {
			result += 1;
		}
	}
	cout << result;
	return 0;
}