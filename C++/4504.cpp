// [4504] ��� ã��

/*
���� n(0 < n < 1000)�� ���� ����� �־����� ��, 
��Ͽ� ����ִ� ���� n�� ������� �ƴ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� n�� �־�����. ���� �ٺ��� �� �ٿ� �� ���� ��Ͽ� ����ִ� ���� �־�����.
�� ���� 0���� ũ��, 10,000���� �۴�. ����� 0���� ������.

���
��Ͽ� �ִ� ���� n�� ������� �ƴ����� ���� �� ���� ���ó�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
using namespace std;

int main() {
	int n, a, b;
	cin >> n;

	while (true) {
		cin >> a;

		if (a == 0) {
			break;
		}

		if (a % n != 0) {
			cout << a << " is NOT a multiple of " << n << ".\n";
		}
		else {
			cout << a << " is a multiple of " << n << ".\n";
		}
	}
}