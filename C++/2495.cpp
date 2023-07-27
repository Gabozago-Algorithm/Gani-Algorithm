// [2495] ���ӱ���

/*
���� �ڸ��� ���� ������ �־��� ��, �� �ȿ��� �����Ͽ� ���� ���ڰ� ������ ���� ������ 1�� ����ϰ�, 
������ ���� ���ڰ� �����ؼ� ������ ���� �� ���� �� ���� ���̸� ����ϴ� ���α׷��� �ۼ��϶�.

���� ��� �� ���� ���� 12345123, 17772345, 22233331�� �־����ٰ� ����. 
12345123�� �����Ͽ� ���� ���ڰ� ������ ���� �����Ƿ� 1�� ����ϰ�, 
17772345�� 7�� �� �� �����Ͽ� �����Ƿ� 3�� ����ϸ�, 
22233331�� ��쿡�� 2�� �� ��, 3�� �� �� �����ؼ� �����Ƿ� �� �� ū ���� 4�� ���

�Է�
ù° �ٺ��� ��° �ٱ��� �� �ٿ� �ϳ��� �� ���� ���� �ڸ� ���� ������ �־�����.

���
ù° �ٿ��� ��° �ٱ��� �� �ٿ� �ϳ��� �� �Էµ�  �� ������ 
���� ���ڰ� �����Ͽ� ������ ���� �� ���̸� �Է� ������� ����Ѵ�.
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
    string str;

    for (int i = 0; i < 3; i++) {
        cin >> str;
        int cnt = 1;
        int max = 1;

        for (int i = 0; i < str.length() - 1; i++) {
            if (str[i] == str[i + 1]) {
                cnt++;

                if (cnt > max) {
                    max = cnt;
                }
            }
            else {      
                cnt = 1;  // ���ӱ����� ������ 1 ���
            }
        }
        cout << max << "\n";
    }
}