// [10173] �ϸ� ã�Ƽ�

/*
���� ����� �����ִ� �ϸ�(Nemo)�� ã�ƺ���. 
�ϸ� ã�µ� �־ ��ҹ��ڴ� �߿����� �ʴ�.

�Է�
���� ������ �� �ٷ� �ԷµǸ�, �Է��� ���������� "EOI" �Էµȴ�.
�� ���� �ִ� 80���� ���ڷ� �̷���� �ִ�

���
������ �ϸ� ã���� ��Found��, ��ã���� ��Missing���� �� �ٿ� �°� ���
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s;

	// ���ڿ� �Է� �ݺ�
	while (getline(cin, s)) {
		if (s == "EOI") {
			break;
		}

		// �Ϸ��� ������ Ư�� ���ǿ� ���� ��ȯ
		// ::tolwer �ҹ��ڷ� ��ȯ
		// ::toupper �빮�ڷ� ��ȯ
		transform(s.begin(), s.end(), s.begin(), ::tolower);

		if (s.find("nemo") != string::npos) {
			cout << "Found" << endl;
		}
		else {
			cout << "Missing" << endl;
		}
	}
}