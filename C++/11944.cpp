// [11944] NN

/*
������ �ſ� �����ϴ�.
N�� N�� ����ϴ� ���α׷��� �ۼ��Ͽ���. 
�ٸ�, ���� ������� ��� ���� �� M�ڸ��� ����Ѵ�.

�Է�
ù ��° �ٿ��� N, M�� �־�����. 
(1 �� N, M �� 2016)

���
N�� N�� ����Ѵ�.
���� ���� ������� ���� �� M�ڸ��� ����Ѵ�.
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
	string n;
	int m;
	cin >> n >> m;
	string str;

	for (int i = 0; i < stoi(n); i++) {
		str += n;
	}
	if (str.length() > m) {
		cout << str.substr(0, m);
	}
	else {
		cout << str;
	}
	return 0;
}