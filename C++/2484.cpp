// [2484] 주사위 네개

/*
1에서부터 6까지의 눈을 가진 4개의 주사위를 던져서 
다음과 같은 규칙에 따라 상금을 받는 게임이 있다.

같은 눈이 4개가 나오면 50,000원+(같은 눈)×5,000원의 상금을 받게 된다.
같은 눈이 3개만 나오면 10,000원+(3개가 나온 눈)×1,000원의 상금을 받게 된다.
같은 눈이 2개씩 두 쌍이 나오는 경우에는 2,000원+(2개가 나온 눈)×500원+(또 다른 2개가 나온 눈)×500원의 상금을 받게 된다.
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.

예를 들어, 4개의 눈이 3, 3, 3, 3으로 주어지면 50,000+3×5,000으로 계산되어 65,000원의 상금
4개의 눈이 3, 3, 6, 3으로 주어지면 상금은 10,000+3×1,000으로 계산되어 13,000원을 받게 된다. 
또 4개의 눈이 2, 2, 6, 6으로 주어지면 2,000+2×500+6×500으로 계산되어 6,000원을 받게 된다.
4개의 눈이 6, 2, 1, 6으로 주어지면 1,000+6×100으로 계산되어 1,600원을 받게 된다. 
4개의 눈이 6, 2, 1, 5로 주어지면 그 중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.

N(1 ≤ N ≤ 1,000)명이 주사위 게임에 참여하였을 때, 
가장 많은 상금을 받은 사람의 상금을 출력하는 프로그램을 작성하시오.

입력
첫째 줄에는 참여하는 사람 수 N이 주어지고 
그 다음 줄부터 N개의 줄에 사람들이 주사위를 던진 4개의 눈이 빈칸을 사이에 두고 각각 주어진다.

출력
첫째 줄에 가장 많은 상금을 받은 사람의 상금을 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

int N;
vector<int> result;
int a, b;

// 문제의 조건중 어느 번호 조건에 해당하는지 판별
int f(int cnt[]) {
	vector<int> temp;

	for (int i = 1; i <= 6; i++) {
		if (cnt[i] > 0)
			temp.push_back(i);

		// 같은 눈이 4개
		if (cnt[i] == 4) {
			a = i;
			return 1;
		}
		// 같은 눈이 3개
		else if (cnt[i] == 3) {
			a = i;
			return 2;
		}
		// 같은 눈이 2개
		else if (cnt[i] == 2) {
			for (int j = i + 1; j <= 6; j++) {
				// 같은 눈이 2개씩 두 쌍
				if (cnt[j] == 2) {
					a = i;
					b = j;
					return 3;
				}
			}
			// 같은 눈이 2개
			a = i;
			return 4;
		}
	}
	// 모두 다른 눈
	sort(temp.begin(), temp.end());
	a = temp[temp.size() - 1];
	return 5;
}

int main() {
	scanf("%d", &N);
	result.resize(N);

	for (int i = 0; i < N; i++) {
		// 주사위 번호(1 ~ 6)당 얼마나 나왔는지 카운트하는 배열
		int cnt[7] = { 0 };

		int dice[4];

		for (int j = 0; j < 4; j++) {
			scanf("%d", &dice[j]);
			cnt[dice[j]]++;
		}

		int condition = f(cnt);

		if (condition == 1)
			result[i] = 50000 + a * 5000;
		else if (condition == 2)
			result[i] = 10000 + a * 1000;
		else if (condition == 3)
			result[i] = 2000 + a * 500 + b * 500;
		else if (condition == 4)
			result[i] = 1000 + a * 100;
		else
			result[i] = a * 100;
	}

	sort(result.begin(), result.end());

	printf("%d\n", result[N - 1]);

	return 0;
}