// [2446] �� ��� - 9

/*
������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.

*/

// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - i - 2; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 3; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}