// [2702] ��6 ����

/*
�� ���� a�� b �ּҰ������ �� ���� ����� ��� �� ���� ���� ���̰�,
�ִ������� �� ���� ����� ����� ���� ū ���̴�.
a�� b�� �־����� ��, �ּҰ������ �ִ������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1<=T<=1,000)�� �־�����.
�� �׽�Ʈ ���̽��� �� ���� a�� b�� �̷���� �ְ�, �������� ���еǾ� �ִ�.
(1 <= a,b <= 1,000)

���
�� �׽�Ʈ ���̽��� ���� �ּҰ������ �ִ������� ���ʴ�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

// �ִ�����
int big(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	return big(b, a % b);
}

// �ּҰ���� = A * B / �ִ�����
int small(int a, int b) {
	return a * b / big(a, b);
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		cout << small(x, y) << " " << big(x, y) << "\n";
	}

}