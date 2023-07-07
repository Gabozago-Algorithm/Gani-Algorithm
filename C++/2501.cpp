// [2501] 약수 구하기

/*
어떤 자연수 p와 q가 있을 때, 만일 p를 q로 나누었을 때 나머지가 0이면 q는 p의 약수
두 개의 자연수 N과 K가 주어졌을 때, N의 약수들 중 K번째로 작은 수를 출력하는 프로그램

입력
첫째 줄에 N과 K가 빈칸을 사이에 두고 주어진다. N은 1 이상 10,000 이하이다. K는 1 이상 N 이하

출력
첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력한다. 
만일 N의 약수의 개수가 K개보다 적어서 K번째 약수가 존재하지 않을 경우에는 0을 출력
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k, cnt = 0;
	vector<int> div;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		// 나눠떨어지면 약수
		if (n % i == 0) {
			div.push_back(i);
			cnt++;
		}
	}

	if (cnt < k) {
		cout << 0;
	}
	else {
		cout << div[k - 1];
	}
	
}