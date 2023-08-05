// [2752] 세수정렬

/*
동규는 세수를 하다가 정렬이 하고싶어졌다.
숫자 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어 졌다.
숫자 세 개가 주어졌을 때, 
가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오

입력
숫자 세 개가 주어진다.
이 숫자는 1보다 크거나 같고, 1,000,000보다 작거나 같다. 
이 숫자는 모두 다르다.

출력
제일 작은 수, 그 다음 수, 제일 큰 수를 차례대로 출력한다.
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
    int num[3], temp;
    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (num[i] > num[j]) {
                // 가장 작은 수, 그 다음 수, 가장 큰 수
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << num[i] << " ";
    }
	return 0;
}