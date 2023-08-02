// [10807] 개수 세기

/*
총 N개의 정수가 주어졌을 때, 
정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 
둘째 줄에는 정수가 공백으로 구분되어져있다. 
셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 

입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 
100보다 작거나 같다.

출력
첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.
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
	int n, v;
	int arr[101] = {0, };
	int ans = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 찾을 숫자
	cin >> v;

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) {
			ans++;
		}
	}
		
	cout << ans << endl;
	return 0;
}