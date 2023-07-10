// [10820] 문자열 분석

/*
문자열 N개가 주어진다.
이때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램
각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.

입력
첫째 줄부터 N번째 줄까지 문자열이 주어진다.
(1 ≤ N ≤ 100) 문자열의 길이는 100을 넘지 않는다.

출력
첫째 줄부터 N번째 줄까지 각각의 문자열에 대해서 
소문자, 대문자, 숫자, 공백의 개수를 공백으로 구분해 출력
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	// 문자열 입력 반복
	while (getline(cin, s)) {		
		// 소문자, 대문자, 숫자, 공백의 개수
		int a = 0, b = 0, c = 0, d = 0;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				a++;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z') {
				b++;
			}
			else if (s[i] >= '0' && s[i] <= '9') {
				c++;
			}
			else if (s[i] == ' ')
			{
				d++;
			}
		}
		cout << a << " " << b << " " << c << " " << d << '\n';
	}
	return 0;

}