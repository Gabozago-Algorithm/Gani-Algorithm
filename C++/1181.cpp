// [1181] �ܾ� ����

/*
���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷�

���̰� ª�� �ͺ���
���̰� ������ ���� ������
��, �ߺ��� �ܾ�� �ϳ��� ����� �����ؾ� �Ѵ�.

�Է�
ù° �ٿ� �ܾ��� ���� N�� �־�����. (1 �� N �� 20,000) 
��° �ٺ��� N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �� �ٿ� �ϳ��� �־�����. 
�־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�.

���
���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

int cmp(string a, string b) {
	// 1. ���̰� ���ٸ�, ����������
	if (a.length() == b.length()) {
		return a < b;
	}
	// 2. ���̰� �ٸ��ٸ�, ª�� ������ 
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
		// �ߺ��� ��� �ѹ��� ���
		if (word[i] == word[i - 1]) {
			continue;
		}
		cout << word[i] << "\n";
	}

	return 0;
}