// [2948] 2009년

/*
2009년 날짜가 주어졌을 때, 무슨 요일인지 출력하는 프로그램을 작성하시오

입력
첫째 줄에 D와 M이 주어진다. M월 D일이다

출력
2009년 M월 D일의 요일을 영어로 출력한다.
출력은 다음 중 하나이다. "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday".
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
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