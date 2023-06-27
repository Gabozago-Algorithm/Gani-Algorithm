// [1977] 완전제곱수

/*
M과 N이 주어질 때 M이상 N이하의 자연수 중 완전제곱수인 것을 모두 골라 그 합을 구하고 그 중 최솟값을 찾는 프로그램을 작성

입력
첫째 줄에 M이, 둘째 줄에 N이 주어진다.
M과 N은 10000이하의 자연수이며 M은 N보다 같거나 작다.

출력
M이상 N이하의 자연수 중 완전제곱수인 것을 모두 찾아 
첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 
M이상 N이하의 자연수 중 완전제곱수가 없을 경우 첫째 줄에 -1 출력
*/

#include <iostream>
using namespace std;

int main()
{
	// 완전제곱수 : 어떤 정수를 제곱하여 만들 수 있는 수
	int m = 0;
	int n = 0;
	cin >> m >> n;

	int min = 0;
	int sum = 0;
	int temp = 0;

	while (temp * temp <= n) {
		if (temp * temp >= m) {
			// 누적합
			sum += temp * temp;
			if (min == 0) {
				min = temp * temp;
			}
		}
		temp++;
	}

	if (sum == 0) {
		cout << -1 << endl;
	} else {
		cout << sum << endl;
		cout << min << endl;
	}
}