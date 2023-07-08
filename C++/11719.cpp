// [11719] 그대로 출력하기 2

/*
입력 받은 대로 출력하는 프로그램을 작성하시오.

입력
입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 
각 줄은 100글자를 넘지 않으며, 빈 줄이 주어질 수도 있고, 각 줄의 앞 뒤에 공백이 있을 수도 있다.

출력
입력받은 그대로 출력한다
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    // 입력 개수 몰라도 받을 수 있음
    while (getline(cin, text)) {
        cout << text << endl;
    }
}