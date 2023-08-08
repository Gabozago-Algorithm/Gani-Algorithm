// [4458] 첫 글자를 대문자로

/*
문장을 읽은 뒤, 줄의 첫 글자를 대문자로 바꾸는 프로그램을 작성하시오.

입력
첫째 줄에 줄의 수 N이 주어진다. 
다음 N개의 줄에는 문장이 주어진다. 
각 문장에 들어있는 글자의 수는 30을 넘지 않는다. 
모든 줄의 첫 번째 글자는 알파벳이다.

출력
각 줄의 첫글자를 대문자로 바꾼뒤 출력한다.
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
	int n;  
	string str;
	cin >> n;
	cin.ignore();

	while (n--) {
		getline(cin, str);
		// A(65)~ Z(90),  a(97)~z(122)
		if (str[0] >= 97) {
			str[0] = str[0] - 32;
		}
		cout << str << '\n';
	}	
	return 0;
}