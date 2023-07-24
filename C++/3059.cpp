// [3059] 등장하지 않는 문자의 합

/*
알파벳 대문자로 구성되어있는 문자열 S가 주어졌을 때,
S에 등장하지 않는 알파벳 대문자의 아스키 코드 값의 합을 구하는 프로그램을 작성하시오.

문자열 S가 “ABCDEFGHIJKLMNOPQRSTUVW” 일 때, S에 등장하지 않는 알파벳 대문자는 X, Y, Z이다. 
X의 아스키 코드 값은 88, Y는 89, Z는 90이므로 이 아스키 코드 값의 합은 267이다.

알파벳 대문자의 아스키 코드 값은 다음과 같다.
A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z
65	66	67	68	69	70	71	72	73	74	75	76	77	78	79	80	81	82	83	84	85	86	87	88	89	90

입력
입력은 T개의 테스트 데이터로 구성된다. 
입력의 첫 번째 줄에는 입력 데이터의 수를 나타내는 정수 T가 주어진다. 
각 테스트 데이터는 한 줄로 구성되어 있고, 문자열 S가 주어진다. 
S는 알파벳 대문자로만 구성되어 있고, 최대 1000글자이다

출력
각 테스트 데이터에 대해,
입력으로 주어진 문자열 S에 등장하지 않는 알파벳 대문자의 아스키 코드 값의 합을 한 줄에 하나씩 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

// 쿼터(Quarter, $0.25)의 개수, 다임(Dime, $0.10)의 개수, 니켈(Nickel, $0.05)의 개수, 페니(Penny, $0.01)
int arr[4] = { 25,10,5,1 };

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        string str;
        cin >> str;

        int arr[26] = { 0 };
        int cnt = 0;

        for (int i = 0; i < str.length(); i++) {
            cnt = str[i] - 65;  // A = 65
            arr[cnt]++;         
        }

        int sum = 0;

        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                sum += i + 65;      // 안쓴 문자들을 다 더한다
            }
        }
        cout << sum << "\n";
    }
    return 0;
}