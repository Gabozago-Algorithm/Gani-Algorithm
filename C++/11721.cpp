// [11721] �� ���� ���� ����ϱ�

/*
���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����.
�� �ٿ� 10���ھ� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ �־�����. 
�ܾ�� ���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ������, 
���̴� 100�� ���� �ʴ´�. 
���̰� 0�� �ܾ�� �־����� �ʴ´�.

���
�Է����� �־��� �ܾ �� ���� ��� �� �ٿ� �ϳ��� ����Ѵ�. 
�ܾ��� ���̰� 10�� ����� �ƴ� ��쿡��
������ �ٿ��� 10�� �̸��� ���ڸ� ����� ���� �ִ�
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
	string str = "";
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		cout << str[i];

		// 10��°����
		if (i % 10 == 9) {
			cout << endl;
		}
	}
	return 0;
}