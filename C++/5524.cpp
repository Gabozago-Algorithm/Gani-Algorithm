// [5524] �Խǰ���

/*
JOIȸ�翡���� �濡 ���� ���� �Խ� ����� �Է��� �� ���ĺ����� �̸��� �Է��Ѵ�. 
��ǻ�Ϳ� ������ ���� �빮�� �ҹ��ڰ� �������� �Խ� ����� �б� ���������.

�Խ� ����� �б� ���� �ϱ� ���ؼ� ��ϵ� �̸��� ��� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ�
��, �Խ� ��Ͽ��� ���� �̸��� ����� ����⵵ �Ѵ�.

�Է�
ù° �ٿ��� ���� N(1 �� N �� 100)�� �־�����. 
��° �ٺ��ʹ� 1���� �̻� 20���� ������ ���� �빮��, �ҹ��ڷθ� �̷������ ���ڿ� Si�� �־�����.

���
i��° �ٿ�, i��° �Խ����� �̸��� �ҹ��ڷ� ����Ѵ�.
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
    int n;
    cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			str[i] = tolower(str[i]);
		}
		cout << str << endl;
	}

    return 0;
}