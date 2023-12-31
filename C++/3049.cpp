// [3049] 다각형의 대각선 다국어

/*
세 대각선이 한 점에서 만나지 않는 볼록 N각형이 주어졌을 때, 
대각선의 교차점의 개수를 세는 프로그램을 작성하시오.

아래 그림은 위의 조건을 만족하는 한 육각형의 교차점 그림이다.
모든 내부각이 180도보다 작은 다각형을 볼록 다각형이라고 한다.

입력
첫째 줄에 N이 주어진다. (3 ≤ N ≤ 100)

출력
첫째 줄에 교차점의 개수를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n * (n - 1) * (n - 2) * (n - 3) / 24 << '\n';
}