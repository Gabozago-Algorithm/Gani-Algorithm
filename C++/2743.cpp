// [2743] �ܾ� ���� ���

/*
���ĺ����θ� �̷���� �ܾ �Է¹޾�, 
�� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� �ҹ��ڿ� �빮�ڷθ� �̷���� �ܾ �־�����. 
�ܾ��� ���̴� �ִ� 100�̴�.

���
ù° �ٿ� �Է����� �־��� �ܾ��� ���̸� ����Ѵ�.
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
    string str;
    cin >> str;

    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        num++;
    }
    cout << num;
    return 0;
}