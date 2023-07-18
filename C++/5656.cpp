// [5656] 비교 연산자

/*
연산자	뜻
>	크다
>=	크거나 같다
<	작다
<=	작거나 같다
==	같다
!=	같지 않다
이 연산자는 두 피연산자를 비교하고, 
(왼쪽 값과 오른쪽 값) true또는 false (1 또는 0)을 리턴한다. 

예를 들어, 2 > 3은 "false"를 리턴하고 (2는 3보다 작기 때문), 
3 != 4는 "true", 3 >= 3은 "true"를 리턴한다.

C언어의 비교 연산식이 주어졌을 때, 결과를 구하는 프로그램을 작성

입력
입력은 최대 12000줄로 이루어져 있다. 
각 줄은 두 정수 a, b가 주어지며, 
정수 사이에는 연산자 ">", ">=", "<", "<=", "==", "!="중 하나가 주어진다. 
연산자와 피연산자 사이에는 공백이 하나 있으며,연산자로 "E" 경우에는 프로그램을 끝낸다. 
(-10000 ≤ a,b ≤ 10000)

출력
입력의 각 줄 마다 입력으로 주어진 식의 결과가 "true"인지 "false"인지 출력한다.
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
    int a, b;
    string str;
    int num = 1;
    
    // 연산자로 "E" 경우에는 프로그램을 끝낸다
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