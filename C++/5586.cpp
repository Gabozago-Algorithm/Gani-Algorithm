// [5586] JOI�� IOI

/*
�Է����� �־����� ���ڿ����� �������� 3���� ���ڰ� JOI �Ǵ� IOI�� ���� 
���� �� �� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
���ڿ��� ���ĺ� �빮�ڷθ� �̷���� �ִ�.
���� ���, �Ʒ��� ���� "JOIOIOI"���� JOI�� 1��, IOI�� 2�� �ִ�.

�Է�
ù° �ٿ� ���ĺ� 10000�� �̳��� ���ڿ��� �־�����

���
ù° �ٿ� ���ڿ��� ���ԵǾ� �ִ� JOI�� ����,
��° �ٿ� IOI�� ������ ����Ѵ�
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
	string str;
	cin >> str;

	int jcnt = 0;
	int icnt = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I') {
			jcnt ++;
		}
		if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') {
			icnt ++;
		}
	}
	cout << jcnt << "\n";
	cout << icnt << "\n";
}