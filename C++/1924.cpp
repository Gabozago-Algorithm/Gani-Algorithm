// [1924] 2007년

/*
오늘은 2007년 1월 1일 월요일이다.
그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.

입력
첫째 줄에 빈 칸을 사이에 두고 x(1 ≤ x ≤ 12)와 y(1 ≤ y ≤ 31)이 주어진다.
참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.

출력
첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT중 하나를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
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

    // 2007년 1월 1일은 월요일
    // 0 일 1 월 2 화 3 수 4 목 5 금 6 토
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