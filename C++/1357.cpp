// [1357] 뒤집힌 덧셈 

/*
어떤 수 X가 주어졌을 때, X의 모든 자리수가 역순이 된 수를 얻을 수 있다. 
Rev(X)를 X의 모든 자리수를 역순으로 만드는 함수라고 하자. 
예를 들어, X=123일 때, Rev(X) = 321이다. 그리고, X=100일 때, Rev(X) = 1이다.

두 양의 정수 X와 Y가 주어졌을 때, Rev(Rev(X) + Rev(Y))를 구하는 프로그램을 작성하시오

입력
첫째 줄에 수 X와 Y가 주어진다. X와 Y는 1,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 문제의 정답을 출력한다.
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
	int x, y;
	int sum;
	string a;
	string b;
	string result;

	cin >> a >> b;

	// 수 X와 Y 를 reverse
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	// string 을 int 로 변환
	x = stoi(a);
	y = stoi(b);

	sum = x + y;

	// 합한걸 다시 reverse
	result = to_string(sum);
	reverse(result.begin(), result.end());

	cout << stoi(result) << endl;
    return 0;
}