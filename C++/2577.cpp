// [2577] ������ ����

/*
�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 
0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��� A = 150, B = 266, C = 427 �̶��
A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, 
����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������

�Է�
ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����. 
A, B, C�� ��� 100���� ũ�ų� ����, 1,000���� ���� �ڿ����̴�.

���
ù° �ٿ��� A �� B �� C�� ����� 0 �� �� �� �������� ����Ѵ�. 
���������� ��° �ٺ��� �� ��° �ٱ��� A �� B �� C�� ����� 
1���� 9������ ���ڰ� ���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ����Ѵ�.
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
	int arr[10] = { 0, }; // 0���� ä�� �迭
	int A, B, C;
	int num;

	cin >> A;
	cin >> B;
	cin >> C;

	num = A * B * C;

    while (num > 0)
    {
        arr[num % 10] += 1;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
	return 0;
}