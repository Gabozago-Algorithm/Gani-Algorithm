// [2495] 연속구간

/*
여덟 자리의 양의 정수가 주어질 때, 그 안에서 연속하여 같은 숫자가 나오는 것이 없으면 1을 출력하고, 
있으면 같은 숫자가 연속해서 나오는 구간 중 가장 긴 것의 길이를 출력하는 프로그램을 작성하라.

예를 들어 세 개의 숫자 12345123, 17772345, 22233331이 주어졌다고 하자. 
12345123은 연속하여 같은 숫자가 나오는 것이 없으므로 1을 출력하고, 
17772345는 7이 세 개 연속하여 나오므로 3을 출력하며, 
22233331의 경우에는 2가 세 개, 3이 네 개 연속해서 나오므로 그 중 큰 값인 4를 출력

입력
첫째 줄부터 셋째 줄까지 각 줄에 하나씩 세 개의 여덟 자리 양의 정수가 주어진다.

출력
첫째 줄에서 셋째 줄까지 한 줄에 하나씩 각 입력된  수 내에서 
같은 숫자가 연속하여 나오는 가장 긴 길이를 입력 순서대로 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
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
                cnt = 1;  // 연속구간이 없으면 1 출력
            }
        }
        cout << max << "\n";
    }
}