// [11655] ROT13

/*
ROT13�� ī�̻縣 ��ȣ�� �������� ���� ���ĺ��� 13���ھ� �о �����.

���� ���, "Baekjoon Online Judge"�� ROT13���� ��ȣȭ�ϸ� "Onrxwbba Bayvar Whqtr"�� �ȴ�.
ROT13���� ��ȣȭ�� ������ ���� �������� �ٲٷ��� ��ȣȭ�� ���ڿ��� �ٽ� ROT13�ϸ� �ȴ�. 
�տ��� ��ȣȭ�� ���ڿ� "Onrxwbba Bayvar Whqtr"�� �ٽ� ROT13�� �����ϸ� "Baekjoon Online Judge"�� �ȴ�.

ROT13�� ���ĺ� �빮�ڿ� �ҹ��ڿ��� ������ �� �ִ�. 
���ĺ��� �ƴ� ���ڴ� ���� ���� �״�� ���� �־�� �Ѵ�.
���� ���, "One is 1"�� ROT13���� ��ȣȭ�ϸ� "Bar vf 1"�� �ȴ�.

���ڿ��� �־����� ��, "ROT13"���� ��ȣȭ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���ĺ� �빮��, �ҹ���, ����, ���ڷθ� �̷���� ���ڿ� S�� �־�����.
S�� ���̴� 100�� ���� �ʴ´�.

���
ù° �ٿ� S�� ROT13���� ��ȣȭ�� ������ ����Ѵ�.
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
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		//  ���� ���ĺ��� 13���ھ� �о �����
		if (s[i] >= 'a' && s[i] <= 'z') {
			if ((s[i] + 13) > 'z') {
				// -26�� �ؼ� 'a'�� �����
				s[i] -= 13;
			}
			else {
				s[i] += 13;
			}
		}

		if (s[i] >= 'A' && s[i] <= 'Z') {
			if ((s[i] + 13) > 'Z') {
				// -26�� �ؼ� 'A'�� �����
				s[i] -= 13;
			}
			else {
				s[i] += 13;
			}
		}
	}
	cout << s;
	return 0;
}