// [1871] ���� �ڵ��� ��ȣ��

/*
�ٹ�Ÿ�� �ڵ��� ��ȣ���� ABC-0123 (�� ����, �� ����)�� ���� �� �κ����� �������� �ִ�.
���� ��ȣ���� ù ��° �κ��� ��ġ�� �� ��° �κ��� ��ġ�� ���̰� 100�� ���� �ʴ� ��ȣ���̴�.

���ڷ� �̷���� ù ��° �κ��� ��ġ�� ���ڸ� 26���� ��ó�� ����Ѵ�.
(�� �ڸ��� [A..Z]) ���� ���, "ABC"�� ��ġ�� 28 (0��262 + 1��261 + 2��260)�� �ȴ�.
"ABC-0123"��  |28 - 123| �� 100 �̱� ������, ���� ��ȣ���̴�.

�ڵ��� ��ȣ���� �־����� ��, ���� ��ȣ������ �ƴ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ��ȣ���� �� N (1 �� N �� 100)�� �־�����.
���� N�� �ٿ��� �ڵ��� ��ȣ���� LLL-DDDD �������� �־�����.

���
������ �ڵ��� ��ȣ�ǿ� ���ؼ�, ���� ��ȣ���̸� "nice"��, �ƴϸ� "not nice"�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
using namespace std;

int main()
{
    // ��ȣ���� �� N
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string carNumber;
        cin >> carNumber;

        // ���ڿ����� '-'�� ã����
        int pipe = carNumber.find('-');              

        // �ڵ��� �ձ���
        string front = (carNumber.substr(0, pipe));
        // �ڵ��� �ڼ���
        // stoi : string �� int �� ����
        int back = stoi(carNumber.substr(pipe + 1));

        int a, sum = 0;
        double b;

        // ù ��° �κ��� ��ġ (26���� ��)
        for (int i = 0; i < front.length(); i++) {
            char c = front[i];
            
            a = int(c) - 65;             
            b = a * pow(26, front.length() - i - 1);
            sum += b;
        }

        // ù ��° �κ��� ��ġ (���̰� 100�� ���� �ʰ� �ϱ�)
        int num = abs(sum - back);

        if (num <= 100) {
            cout << "nice" << "\n";
        }
        else {
            cout << "not nice" << "\n";
        }
    }
    return 0;
}