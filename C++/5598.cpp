// [5598] ī�̻縣 ��ȣ

/*
���̿콺 �����콺 ī�̻縣(Gaius Julius Caesar)�� ���� �θ� �������� ��ġ��
ī�̻縣�� ��н����� ������ �� ��, 'A'�� 'D��', 'B'�� 'E'��, 'C'�� 'F'��... 
�̷� ������ ���ĺ� ���ڸ� 3���� �ǳʶپ� �����ٰ� �Ѵ�.

��ȯ��    A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
��ȯ��    D E F G H I J K L M N O P Q R S T U V W X Y Z A B C

26���� �빮�� ���ĺ����� �̷���� �ܾ ī�̻縣 ��ȣ �������� 3���ڸ� �Ű� 
��ġ�� �ʰ� �����Ͽ� ���� ī�̻縣 �ܾ �ִ�. 
�� ī�̻縣 �ܾ ���� �ܾ�� �������� ���α׷��� �ۼ�

�Է�
�Է��� �� �ٷ� �̷���� ������, 
�� �� �ٿ��� �빮�� ���ĺ����� ������ �ܾ 1�� �ִ�.
�ܾ�� �ִ� 1000�� �����̴�

���
�Է¹��� ī�̻縣 �ܾ ���� �ܾ�� ��ģ �� ����Ͻø� �ȴ�
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
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		// ���ĺ� ���ڸ� 3���� �ǳʶپ� �������Ƿ� �ٽ� �ǵ�����
		s[i] -= 3;

		// 65���� �۾������� 26�� ���ؼ� �ڷΰ��� �Ѵ�
		if (s[i] < 'A') {
			s[i] += 26;
		}
	}
	cout << s;
}