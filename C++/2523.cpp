// [2523] �� ��� - 13

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
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}