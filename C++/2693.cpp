// [2693] N번째 큰 수

/*
배열 A가 주어졌을 때, N번째 큰 값을 출력하는 프로그램을 작성하시오.
배열 A의 크기는 항상 10이고, 자연수만 가지고 있다. N은 항상 3이다.

입력
첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다. 
각 테스트 케이스는 한 줄로 이루어져 있고, 
배열 A의 원소 10개가 공백으로 구분되어 주어진다. 
이 원소는 1보다 크거나 같고, 1,000보다 작거나 같은 자연수이다.

출력
각 테스트 케이스에 대해 한 줄에 하나씩 배열 A에서 3번째 큰 값을 출력한다.
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
	int T;
	int arr[10] = { 0, };

	cin >> T;
	for (int j = 0; j < T; j++) {
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 10);
		// 오름차순으로 정렬했을때, 8번째 수를 출력
		cout << arr[7] << endl;
	}
    return 0;
}