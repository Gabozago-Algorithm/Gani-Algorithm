// [4458] ù ���ڸ� �빮�ڷ�

/*
������ ���� ��, ���� ù ���ڸ� �빮�ڷ� �ٲٴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� �� N�� �־�����. 
���� N���� �ٿ��� ������ �־�����. 
�� ���忡 ����ִ� ������ ���� 30�� ���� �ʴ´�. 
��� ���� ù ��° ���ڴ� ���ĺ��̴�.

���
�� ���� ù���ڸ� �빮�ڷ� �ٲ۵� ����Ѵ�.
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
	int n;  
	string str;
	cin >> n;
	cin.ignore();

	while (n--) {
		getline(cin, str);
		// A(65)~ Z(90),  a(97)~z(122)
		if (str[0] >= 97) {
			str[0] = str[0] - 32;
		}
		cout << str << '\n';
	}	
	return 0;
}