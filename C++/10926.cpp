// [10926] ??!

/*
회원가입을 하다가 joonas라는 아이디가 이미 존재하는 것을 보고 놀랐다.
준하는 놀람을 ? ? !로 표현한다.
준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때,
놀람을 표현하는 프로그램을 작성하시오.

입력
첫째 줄에 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어진다. 
아이디는 알파벳 소문자로만 이루어져 있으며, 길이는 50자를 넘지 않는다.

출력
첫째 줄에 준하의 놀람을 출력한다. 놀람은 아이디 뒤에 ??!를 붙여서 나타낸다.
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
    cin >> str;

    cout << str << "??!";    
    return 0;
}