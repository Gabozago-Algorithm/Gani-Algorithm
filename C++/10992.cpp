// [10992] �� ��� - 17

/*
������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}

		if (i == 1 || i == n) {
			for (int j = 1; j <= (i - 1) * 2 + 1; ++j) {
				cout << "*";
			}
		}
		else {
			cout << "*";
			for (int j = 1; j <= (i - 1) * 2 - 1; ++j) {
				cout << " ";
			}
			cout << "*";
		}

		cout << "\n";
	}

}