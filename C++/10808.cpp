// [10808] ���ĺ� ����

/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. 
�� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ� S�� �־�����. 
�ܾ��� ���̴� 100�� ���� ������,
���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
�ܾ ���ԵǾ� �ִ� a�� ����, b�� ����, ��, z�� ������
�������� �����ؼ� ����Ѵ�.
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
	string S;
	cin >> S;

	// ���ĺ� ���� ��� �迭
	int arr[26] = { 0, };

	for (int i = 0; i < S.length(); i++)
	{
		// �� ���ڸ� 'a' �Ǵ� 97�� ���� �迭�� ī��Ʈ�� ����
		arr[S[i] - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}