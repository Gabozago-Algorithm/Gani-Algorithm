// [1978] �Ҽ� ã��

/*
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ�

�Է�
ù �ٿ� ���� ���� N�� �־�����. 
N�� 100�����̴�. 
�������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ���

���
�־��� ���� �� �Ҽ��� ������ ���
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n, a;
	int cnt = 0, result = 0;
	cin >> n;

	// �Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� 1���� ū ����
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 1; j <= a; j++) {
			if (a % j == 0) {
				cnt++;
			}
		}
		// ������������ ������ 2����
		if (cnt == 2) {
			result++;
		}
		cnt = 0;
	}

	cout << result;
}