// [10808] 알파벳 개수

/*
알파벳 소문자로만 이루어진 단어 S가 주어진다. 
각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 단어 S가 주어진다. 
단어의 길이는 100을 넘지 않으며,
알파벳 소문자로만 이루어져 있다.

출력
단어에 포함되어 있는 a의 개수, b의 개수, …, z의 개수를
공백으로 구분해서 출력한다.
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
	string S;
	cin >> S;

	// 알파벳 개수 담는 배열
	int arr[26] = { 0, };

	for (int i = 0; i < S.length(); i++)
	{
		// 각 문자를 'a' 또는 97을 빼서 배열의 카운트를 증가
		arr[S[i] - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}