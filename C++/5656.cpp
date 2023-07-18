// [5656] �� ������

/*
������	��
>	ũ��
>=	ũ�ų� ����
<	�۴�
<=	�۰ų� ����
==	����
!=	���� �ʴ�
�� �����ڴ� �� �ǿ����ڸ� ���ϰ�, 
(���� ���� ������ ��) true�Ǵ� false (1 �Ǵ� 0)�� �����Ѵ�. 

���� ���, 2 > 3�� "false"�� �����ϰ� (2�� 3���� �۱� ����), 
3 != 4�� "true", 3 >= 3�� "true"�� �����Ѵ�.

C����� �� ������� �־����� ��, ����� ���ϴ� ���α׷��� �ۼ�

�Է�
�Է��� �ִ� 12000�ٷ� �̷���� �ִ�. 
�� ���� �� ���� a, b�� �־�����, 
���� ���̿��� ������ ">", ">=", "<", "<=", "==", "!="�� �ϳ��� �־�����. 
�����ڿ� �ǿ����� ���̿��� ������ �ϳ� ������,�����ڷ� "E" ��쿡�� ���α׷��� ������. 
(-10000 �� a,b �� 10000)

���
�Է��� �� �� ���� �Է����� �־��� ���� ����� "true"���� "false"���� ����Ѵ�.
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
    int a, b;
    string str;
    int num = 1;
    
    // �����ڷ� "E" ��쿡�� ���α׷��� ������
    while (true) {
        cin >> a >> str >> b;

        if (str == "E") {
            break;
        }


        for (int i = 0; i < str.length(); i++) {
            if (str[i + 1] == '=') {
                if (str[i] == '>') {
                    if (a >= b) {
                        cout << "Case " << num << ": true\n";
                    }
                    else {
                        cout << "Case " << num << ": false\n";
                    }
                }
                else if (str[i] == '<') {
                    if (a <= b) {
                        cout << "Case " << num << ": true\n";
                    }
                    else {
                        cout << "Case " << num << ": false\n";
                    }
                }
                else if (str[i] == '=') {
                    if (a == b) {
                        cout << "Case " << num << ": true\n";
                    }
                    else {
                        cout << "Case " << num << ": false\n";
                    }
                }
                else if (str[i] == '!') {
                    if (a != b) {
                        cout << "Case " << num << ": true\n";
                    }
                    else {
                        cout << "Case " << num << ": false\n";
                    }
                }
            }
            else if (str[i] == '>') {
                if (a > b) {
                    cout << "Case " << num << ": true\n";
                }
                else {
                    cout << "Case " << num << ": false\n";
                }
            }
            else if (str[i] == '<') {
                if (a < b) {
                    cout << "Case " << num << ": true\n";
                }
                else {
                    cout << "Case " << num << ": false\n";
                }
            }
        }
        num++;
    }
    return 0;
}