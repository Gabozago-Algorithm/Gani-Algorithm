// [2953] 나는 요리사다

/*
"나는 요리사다"는 다섯 참가자들이 서로의 요리 실력을 뽐내는 티비 프로이다.
각 참가자는 자신있는 음식을 하나씩 만들어오고, 
서로 다른 사람의 음식을 점수로 평가해준다. 
점수는 1점부터 5점까지 있다.

각 참가자가 얻은 점수는 다른 사람이 평가해 준 점수의 합이다. 
이 쇼의 우승자는 가장 많은 점수를 얻은 사람이 된다.

각 참가자가 얻은 평가 점수가 주어졌을 때, 
우승자와 그의 점수를 구하는 프로그램을 작성하시오.

입력
총 다섯 개 줄에 각 참가자가 얻은 네 개의 평가 점수가 공백으로 구분되어 주어진다. 첫 번째 참가자부터 다섯 번째 참가자까지 순서대로 주어진다. 
항상 우승자가 유일한 경우만 입력으로 주어진다

출력
첫째 줄에 우승자의 번호와 그가 얻은 점수를 출력한다.
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
    int max = 0, s;
    int max_i;
    for (int i = 1; i <= 5; i++) {
        int score = 0;

        for (int j = 0; j < 4; j++) {
            cin >> s;
            score += s;
        }

        // 가장 큰 값 갱신
        if (score > max) {
            max = score;
            max_i = i;
        }
    }

    // 가장 큰 값의 인덱스와 가장 큰 값
    cout << max_i << " " << max;
    return 0;
}