// [2774] �Ƹ��ٿ� ��

/*
�����̴� ������ �Ƹ��ٿ� ���� ���ٰ� �����Ѵ�. 
�׷��� �����̴� �繰�� �� �� �ڽ��� ���� ������� �Ƹ��ٿ� ������ ���Ѵ�. 

�����̴� ���� �� ���� �̷� �Ƹ��ٿ� ���� ������ �����µ�, 
�Ƹ��ٿ� ���� ������ �� ���� �̷�� �ִ� 10������ ���� �ٸ� ������ ������ �ǹ��Ѵ�.

122�̶�� ���� 1�� 2 ��� 2���� ���ڷ� �̷���� �����Ƿ� �Ƹ��ٿ� ������ 2�� �ȴ�. 
�������� ������� ���� ������ �Ƹ��ٿ� ������ �˾ƺ���.

�Է�
ù° �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����. 
���� �ٺ��ʹ� �Ƹ��ٿ� ������ �˰� ���� �� X(1 �� X �� 1000000000)�� �־�����

���
������ �׽�Ʈ ���̽����� X�� �Ƹ��ٿ� ������ �� �ٿ� �ϳ��� �Է����� �־��� ������� ����Ѵ�
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
using namespace std;

int main() {
	int T;
	cin >> T;

	string temp;
	for (int i = 0; i < T; i++) {
		cin >> temp;

		int index = 0;
		// 0~9 ����
		int arr[10] = { 0, };
		for (int j = 0; j < temp.length(); j++) {
			index = temp[j] - '0';
			arr[index] ++;
		}

		int result = 0;
		// index ���� ���� �ִ� �Ƹ��ٿ� ���� üũ!
		for (int j = 0; j < 10; j++) {
			if (arr[j] != 0) {
				result += 1;
			}
		}
		cout << result << '\n';
	}
}