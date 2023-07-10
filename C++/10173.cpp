// [10173] 니모를 찾아서

/*
영어 문장속 숨어있는 니모(Nemo)를 찾아보자. 
니모를 찾는데 있어서 대소문자는 중요하지 않다.

입력
여러 문장이 각 줄로 입력되며, 입력의 마지막에는 "EOI" 입력된다.
한 줄은 최대 80개의 글자로 이루어져 있다

출력
숨겨진 니모를 찾으면 “Found”, 못찾으면 “Missing”를 각 줄에 맞게 출력
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s;

	// 문자열 입력 반복
	while (getline(cin, s)) {
		if (s == "EOI") {
			break;
		}

		// 일련의 값들을 특정 조건에 따라서 변환
		// ::tolwer 소문자로 변환
		// ::toupper 대문자로 변환
		transform(s.begin(), s.end(), s.begin(), ::tolower);

		if (s.find("nemo") != string::npos) {
			cout << "Found" << endl;
		}
		else {
			cout << "Missing" << endl;
		}
	}
}