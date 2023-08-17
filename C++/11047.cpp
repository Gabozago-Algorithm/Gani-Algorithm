// [11047] 동전 0

/*
준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.

동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 
이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N과 K가 주어진다. (1 ≤ N ≤ 10, 1 ≤ K ≤ 100,000,000)
둘째 줄부터 N개의 줄에 동전의 가치 Ai가 오름차순으로 주어진다.
(1 ≤ Ai ≤ 1,000,000, A1 = 1, i ≥ 2인 경우에 Ai는 Ai-1의 배수)

출력
첫째 줄에 K원을 만드는데 필요한 동전 개수의 최솟값을 출력한다.

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
	int N, K;
	int A[10];

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	} //A1 = 1, Ai는 A(i-1)의 배수

	int count = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (A[i] <= K) {
			count = count + K / A[i];
			K = K % A[i];
		}
		if (K == 0)
			break;
	}

	cout << count << endl;
	return 0;
}