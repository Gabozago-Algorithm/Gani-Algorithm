// [10821] ������ ����

/*
���ڿ� �޸��θ� �̷���� ���ڿ� S�� �־�����. 
�̶�, S�� ���ԵǾ��ִ� ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

S�� ù ���ڿ� ������ ���ڴ� �׻� �����̰�, 
�޸��� �����ؼ� �־����� �ʴ´�. 
��, 0���� �����ϴ� ������ �־����� �ʴ´�.

�Է�
ù° �ٿ� ���ڿ� S�� �־�����. S�� ���̴� �ִ� 100�̴�.

���
���ڿ� S�� ���ԵǾ� �ִ� ������ ������ ����Ѵ�.
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
    int cnt = 0;
    string str;

    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',') {
            cnt++;
        }
    }
    cout << cnt + 1;

	return 0;
}