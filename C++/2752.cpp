// [2752] ��������

/*
���Դ� ������ �ϴٰ� ������ �ϰ�;�����.
���� �� ���� ������ �ڿ�, �̸� ������������ �����ϰ� �;� ����.
���� �� ���� �־����� ��, 
���� ���� ��, �� ���� ��, ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է�
���� �� ���� �־�����.
�� ���ڴ� 1���� ũ�ų� ����, 1,000,000���� �۰ų� ����. 
�� ���ڴ� ��� �ٸ���.

���
���� ���� ��, �� ���� ��, ���� ū ���� ���ʴ�� ����Ѵ�.
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
    int num[3], temp;
    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (num[i] > num[j]) {
                // ���� ���� ��, �� ���� ��, ���� ū ��
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << num[i] << " ";
    }
	return 0;
}