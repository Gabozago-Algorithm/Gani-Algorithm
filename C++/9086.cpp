// [9086] ���ڿ�

/*
���ڿ��� �Է����� �ָ� ���ڿ��� ù ���ڿ� ������ ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է�
�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T(1 �� T �� 10)�� �־�����. 
�� �׽�Ʈ ���̽��� �� �ٿ� �ϳ��� ���ڿ��� �־�����. 
���ڿ��� ���ĺ� A~Z �빮�ڷ� �̷������ ���ĺ� ���̿� ������ ������ 
���ڿ��� ���̴� 1000���� �۴�.

���
�� �׽�Ʈ ���̽��� ���ؼ� �־��� ���ڿ��� ù ���ڿ� ������ ���ڸ� �����Ͽ� ����Ѵ�.
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
	int T;
	cin >> T;

	while (T--) {
		cin >> str;
		// ù ��° + ������ ��°
		cout << str[0] << str[str.length() - 1] << '\n';
	}
	
	return 0;
}