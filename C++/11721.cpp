// [11721] 열 개씩 끊어 출력하기

/*
알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다.
한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어가 주어진다. 
단어는 알파벳 소문자와 대문자로만 이루어져 있으며, 
길이는 100을 넘지 않는다. 
길이가 0인 단어는 주어지지 않는다.

출력
입력으로 주어진 단어를 열 개씩 끊어서 한 줄에 하나씩 출력한다. 
단어의 길이가 10의 배수가 아닌 경우에는
마지막 줄에는 10개 미만의 글자만 출력할 수도 있다
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
	string str = "";
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		cout << str[i];

		// 10번째까지
		if (i % 10 == 9) {
			cout << endl;
		}
	}
	return 0;
}