// [10821] 정수의 개수

/*
숫자와 콤마로만 이루어진 문자열 S가 주어진다. 
이때, S에 포함되어있는 정수의 개수를 구하는 프로그램을 작성하시오.

S의 첫 문자와 마지막 문자는 항상 숫자이고, 
콤마는 연속해서 주어지지 않는다. 
또, 0으로 시작하는 정수는 주어지지 않는다.

입력
첫째 줄에 문자열 S가 주어진다. S의 길이는 최대 100이다.

출력
문자열 S에 포함되어 있는 정수의 개수를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
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