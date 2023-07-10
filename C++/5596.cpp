// [5596] 시험 점수

/*
민국이와 만세는 4과목(정보, 수학, 과학, 영어)에 대한 시험을 봤다
민국이와 만세가 본 4과목의 점수를 입력하면,
민국이의 총점 S와 만세의 총점 T 중에서 큰 점수를 출력하는 프로그램
단, 서로 동점일 때는 민국이의 총점 S를 출력한다

입력
1번째 줄에는 민국이의 정보, 수학, 과학, 영어 점수(정수형), 공백으로 구분
2번째 줄에는 만세의 정보, 수학, 과학, 영어 점수(정수형), 공백으로 구분

출력
문제에서 요구하는 정답을 출력한다
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int score;
	int sum = 0;
	int total[2] = {0, };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> score;
			sum += score;
		}
		total[i] = sum;
		sum = 0;
	}

	if (total[0] >= total[1]) {
		cout << total[0];
	}
	else {
		cout << total[1];
	}
}