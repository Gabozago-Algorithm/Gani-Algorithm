// [2744] ��ҹ��� �ٲٱ�

/*
���� �ҹ��ڿ� �빮�ڷ� �̷���� �ܾ �Է¹��� ��, 
�빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� �ٲپ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� �ҹ��ڿ� �빮�ڷθ� �̷���� �ܾ �־�����. 
�ܾ��� ���̴� �ִ� 100�̴�.

���
ù° �ٿ� �Է����� �־��� �ܾ�� �빮�ڴ� �ҹ��ڷ�, 
�ҹ��ڴ� �빮�ڷ� �ٲ� �ܾ ����Ѵ�.
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

	for (int i = 0; i < str.length(); i++) {
		// �빮��
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		// �ҹ���
		else {
			str[i] -= 32;
		}
	}

	cout << str;
    return 0;
}