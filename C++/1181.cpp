// [1181] 단어 정렬

/*
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램

길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.

입력
첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 
둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다. 
주어지는 문자열의 길이는 50을 넘지 않는다.

출력
조건에 따라 정렬하여 단어들을 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

int cmp(string a, string b) {
	// 1. 길이가 같다면, 사전순으로
	if (a.length() == b.length()) {
		return a < b;
	}
	// 2. 길이가 다르다면, 짧은 순으로 
	else {
		return a.length() < b.length();
	}
}

string word[20000];

int main() {
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> word[i];
	}

	sort(word, word + N, cmp);

	for (int i = 0; i < N; i++) {
		// 중복된 경우 한번만 출력
		if (word[i] == word[i - 1]) {
			continue;
		}
		cout << word[i] << "\n";
	}

	return 0;
}