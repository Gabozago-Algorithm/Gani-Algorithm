// [10768] Ư���� ��

/*
2�� 18���� ���� CCC�� �־ Ư���� ���̴�.
����ڷκ��� ������ ���� ���� �Է¹޾� ��¥�� 2�� 18������ ������ �������� ���

���� ��¥�� 2�� 18�� ���̸�, "Before"�� ����Ѵ�. 
���� ��¥�� 2�� 18�� �ĸ�, "After"�� ����Ѵ�.
���� 2�� 18���̶�� "Special" �� ����Ѵ�.

�Է�
�Է��� �� ���� ������ �� �ٿ� ���� �Էµȴ�. �� �������� 2015���� ��¥�� ���Եȴ�.
ù ��° ���� 1���� 12������ ���� �Է��Ѵ�.
�� ��° ���� 1���� 31������ �� �޿� ����ִ� ��¥�� �Է��Ѵ� .

���
������ �ٿ� "Before", "After"�� "Special"�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

int main() {
	int m, d;
	cin >> m >> d;

    if (m == 2) {
        if (d == 18) {
            cout << "Special";
        }
        else if (d > 18) {
            cout << "After";
        }
        else cout << "Before";
    }

    else if (m > 2) {
        cout << "After";
    }
    else {
        cout << "Before";
    }

	return 0;
}