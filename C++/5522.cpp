// [5522] ī�� ����

/*
ī�� ������ 5ȸ�� �������� ����Ǹ�, 
�� �������� �ºθ� �ϴ� �����̴�.

JOI���� �� ������ ������ ��Ÿ���� ������ �־����� ��, 
JOI���� ������ ���ϴ� ���α׷��� �ۼ��϶�.

�Է�
ǥ�� �Է¿��� ������ ���� �����͸� �о�´�.
i ��° ��(1 �� i �� 5)���� ���� Ai�� �����ִ�. 
�̰��� i��° ���ӿ����� JOI���� ������ ��Ÿ����.

���
ǥ�� ��¿� JOI���� ������ �� �ٷ� ����϶�.
*/

// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += n;
	}
	cout << sum;
}