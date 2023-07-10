// [2857] FBI

/*
5명의 요원 중 FBI 요원을 찾는 프로그램을 작성하시오.
FBI요원은 요원의 첩보원명에 FBI가 들어있다.

입력
5개 줄에 요원의 첩보원명이 주어진다.
첩보원명은 알파벳 대문자, 숫자 0~9, 대시 (-)로만 이루어져 있으며, 최대 10글자

출력
첫째 줄에 FBI 요원을 출력한다.
해당하는 요원이 몇 번째 입력인지를 공백으로 구분하여 출력해야 하며, 오름차순으로 출력
만약 FBI 요원이 없다면 "HE GOT AWAY!"를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i = 1;
    bool isFind = false;

    while (i < 6) {
        getline(cin, str);
  
        //find함수는 찾은 문자열의 위치를 반환
        // int 값이 아니고 iterator값이다.
        if (str.find("FBI") != string::npos)    // string::npos 일 때는 null
        {   
            // FBI 순서 출력
            cout << i << ' ';
            isFind = true;
        }
        i++;
    }

    // FBI 요원이 없다면
    if (!isFind) {
        cout << "HE GOT AWAY!";
    }
}