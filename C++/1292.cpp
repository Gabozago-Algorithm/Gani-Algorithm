// [1292] 쉽게 푸는 문제

/*
동호는 내년에 초등학교를 입학한다. 
그래서 동호 어머니는 수학 선행 학습을 위해 쉽게 푸는 문제를 동호에게 주었다.

이 문제는 다음과 같다. 1을 한 번, 2를 두 번, 3을 세 번, 
이런 식으로 1 2 2 3 3 3 4 4 4 4 5 .. 이러한 수열을 만들고 
어느 일정한 구간을 주면 그 구간의 합을 구하는 것이다.

하지만 동호는 현재 더 어려운 문제를 푸느라 바쁘기에 우리가 동호를 도와주자.

입력
첫째 줄에 구간의 시작과 끝을 나타내는 정수 A, B(1 ≤ A ≤ B ≤ 1,000)
즉, 수열에서 A번째 숫자부터 B번째 숫자까지 합을 구하면 된다.

출력
첫 줄에 구간에 속하는 숫자의 합을 출력한다.
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
	// 구간의 시작과 끝을 나타내는 정수 A, B
	int A, B;
	cin >> A >> B;
	int count = 0, sum = 0, a[1000];

	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < i && count < 1000; j++) {
			a[count++] = i;
		}
	}

	for (int i = A - 1; i < B; i++) {
		sum += a[i];
	}
	cout << sum;
    return 0;
}