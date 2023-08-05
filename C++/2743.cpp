// [2743] 단어 길이 재기

/*
알파벳으로만 이루어진 단어를 입력받아, 
그 길이를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 
단어의 길이는 최대 100이다.

출력
첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.
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
    string str;
    cin >> str;

    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        num++;
    }
    cout << num;
    return 0;
}