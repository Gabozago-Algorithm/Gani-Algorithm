// [8393] ��

/*
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷�

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
1���� n���� ���� ����Ѵ�.
*/

// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int sum = 0;
	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}