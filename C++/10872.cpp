// [10872] ���丮��

/*
0���� ũ�ų� ���� ���� N�� �־�����
�̶�, N!�� ����ϴ� ���α׷��� �ۼ�

�Է�
ù° �ٿ� ���� N(0 �� N �� 12)�� �־�����.

���
ù° �ٿ� N!�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <stdio.h>
using namespace std;

int factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

int main()
{
	int n;
	cin >> n;

	cout << factorial(n);
}