// [4470] �ٹ�ȣ

/*
�ؽ�Ʈ���� ���� �Է¹��� ��, �� ��ȣ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� �� N�� �־�����. ��° �ٺ��� N���� �ٿ� �� ���� ������ �־�����. 
�� �ٿ� �ִ� ������ ������ 50���ڸ� ���� �ʴ´�

���
�� ������ �տ� �� ��ȣ�� �߰��� �� ����Ѵ�. �� ��ȣ�� 1������ �����Ѵ�. 
�ٹ�ȣ�� �߰��ϴ� ������ ��� ������ �����ϸ� �ȴ�.
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
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        string str;
        getline(cin, str);

        cin.clear();
        printf("%d. ", i);
        cout << str << '\n';
    }
    
    return 0;
}