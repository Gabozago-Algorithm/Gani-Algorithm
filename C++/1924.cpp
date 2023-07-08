// [1924] 2007��

/*
������ 2007�� 1�� 1�� �������̴�.
�׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1 �� x �� 12)�� y(1 �� y �� 31)�� �־�����.
����� 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.

���
ù° �ٿ� x�� y���� ���� ���������� ���� SUN, MON, TUE, WED, THU, FRI, SAT�� �ϳ��� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <string>
using namespace std;

int main() {
    int month, date;
    cin >> month >> date;

    int daysMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int totalDays = 0;

    totalDays += date;
    for (int i = 0; i < (month - 1); i++) {
        totalDays += daysMonth[i];
    }

    // 2007�� 1�� 1���� ������
    // 0 �� 1 �� 2 ȭ 3 �� 4 �� 5 �� 6 ��
    switch (totalDays % 7) {
    case 0:
        cout << "SUN";
        break;
    case 1:
        cout << "MON";
        break;
    case 2:
        cout << "TUE";
        break;
    case 3:
        cout << "WED";
        break;
    case 4:
        cout << "THU";
        break;
    case 5:
        cout << "FRI";
        break;
    case 6:
        cout << "SAT";
        break;
    }
}