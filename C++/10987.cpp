// [10987] ������ ����

/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. 
�̶�, ����(a, e, i, o, u)�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ �־�����. 
�ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, 
���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
ù° �ٿ� ������ ������ ����Ѵ�.
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
	cin >> str;

	int result = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') {
			result += 1;
		}
		else if (str[i] == 'e') {
			result += 1;
		}
		else if (str[i] == 'i') {
			result += 1;
		}
		else if (str[i] == 'o') {
			result += 1;
		}
		else if (str[i] == 'u') {
			result += 1;
		}
	}
	cout << result;
	return 0;
}