// [11365] !�к� ����

/*
����� ���� ���ٰ� �̻��� ������ �߰��ߴ�. 
�� �������� ��ȣ�� ���� �־��µ�, 
�ȶ��� ����� ��ȣ�� �������� �ص��ȴٴ� ���� �߰��ߴ�.

�� ��ȣ�� �ص��ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է�
�� �ٿ� �ϳ��� ��ȣ�� �־�����.
��ȣ�� ���̴� 500�� ���� �ʴ´�.
������ �ٿ��� "END"�� �־�����. (END�� �ص����� �ʴ´�.)

���
�� ��ȣ�� �ص��� ���� �� �ٿ� �ϳ��� ����Ѵ�.
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
	string str;

	while (1) {
		// string���� ���� �� ���� 
		// ������ ���Ե� ���ڿ��� �Է�
		getline(cin, str);
		if (str == "END") {
			break;
		}

		reverse(str.begin(), str.end());
		cout << str << endl;
	}

	return 0;
}