// [11170] 0�� ����

/*
N���� M������ ������ ���̿� ������ �� 
���̿� ���� 0���� ���� ���α׷��� �ۼ��϶�.

���� ���, N, M�� ���� 0, 10�� �� 0�� ����
0�� �ϳ�, 10�� �ϳ��� �����Ƿ� ���� 2�̴�.

�Է�
ù ��° �ٿ� �׽�Ʈ ���̽��� �� T�� �־�����.
�� �ٿ��� N�� M�� �־�����.
1 �� T �� 20
0 �� N �� M �� 1,000,000

���
������ �׽�Ʈ ���̽����� N���� M������ 0�� ������ ����Ѵ�.
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
	// �׽�Ʈ ���̽��� ��
	int t = 0;
	cin >> t;

	while (t--) {
		int n = 0, m = 0;
		cin >> n >> m;

		int cnt = 0;
		for (int i = n; i <= m; i++) {
			string temp = to_string(i);

			for (int j = 0; j < temp.size(); j++) {
				if (temp[j] == '0') {
					// N���� M������ 0�� ����
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}