// [3460] ������

/*
���� ���� n�� �־����� ��, 
�̸� �������� ��Ÿ���� �� 1�� ��ġ�� ��� ã�� ���α׷��� �ۼ��Ͻÿ�. 
������ ��Ʈ(least significant bit, lsb)�� ��ġ�� 0�̴�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. 
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, n�� �־�����.
(1 �� T �� 10, 1 �� n �� 106)

���
�� �׽�Ʈ ���̽��� ���ؼ�, 
1�� ��ġ�� �������� �����ؼ� �� �ϳ��� ����Ѵ�. 
��ġ�� ���� �ͺ��� ����Ѵ�.
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
    int T, n;
    cin >> T;

    while (T--) {
        cin >> n;
        int digit = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                cout << digit << " ";
            }
            // ������ �������
            n /= 2;
            digit++;
        }
    }
	return 0;
}