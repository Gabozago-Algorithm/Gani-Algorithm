// [11656] ���̻� �迭

/*
���̻� �迭�� ���ڿ� S�� ��� ���̻縦 ���������� ������ ���� �迭�̴�.
baekjoon�� ���̻�� baekjoon, aekjoon, ekjoon, kjoon, joon, oon, on, n ���� �� 8������ �ְ�,
�̸� ���������� �����ϸ�, aekjoon, baekjoon, ekjoon, joon, kjoon, n, on, oon�� �ȴ�.

���ڿ� S�� �־����� ��, ��� ���̻縦 ���������� ������ ���� ����ϴ� ���α׷��� �ۼ�

�Է�
ù° �ٿ� ���ڿ� S�� �־�����.
S�� ���ĺ� �ҹ��ڷθ� �̷���� �ְ�, ���̴� 1,000���� �۰ų� ����.

���
ù° �ٺ��� S�� ���̻縦 ���������� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
#include <queue>
using namespace std;

int main() {
	string s;
	string temp[1000];
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		temp[i] = s.substr(i, s.size());
	}

	sort(temp, temp + s.size());
	for (int i = 0; i < s.size(); i++) {
		cout << temp[i] << endl;
	}

	return 0;
}