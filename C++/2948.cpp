// [2948] 2009��

/*
2009�� ��¥�� �־����� ��, ���� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է�
ù° �ٿ� D�� M�� �־�����. M�� D���̴�

���
2009�� M�� D���� ������ ����� ����Ѵ�.
����� ���� �� �ϳ��̴�. "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday".
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>

using namespace std;

int main() {
    int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int d, m;
    char w[7][20] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday","Monday", "Tuesday" };

    scanf("%d %d", &m, &d);
    for (int i = 1; i < d; i++) {
        m += mon[i];
    }
    printf("%s", w[m % 7]);
}