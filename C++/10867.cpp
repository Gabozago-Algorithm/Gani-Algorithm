// [10867] 중복 빼고 정렬하기

/*
N개의 정수가 주어진다. 
이때, N개의 정수를 오름차순으로 정렬하는 프로그램을 작성하시오. 
같은 정수는 한 번만 출력한다.

입력
첫째 줄에 수의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 
둘째에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다.

출력
첫째 줄에 수를 오름차순으로 정렬한 결과를 출력한다. 
이때, 같은 수는 한 번만 출력한다.
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
    int N;
    scanf("%d", &N);
    // N개의 벡터 생성
    vector<int> v(N); 

    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    // 중복 원소를 vector의 제일 뒷부분 쓰레기 값으로 보냄 -> 이 뒷부분 erase로 삭제
    // unique 함수는 앞과 뒤 원소를 비교하기 때문에 무조건 먼저 정렬을 해줘야한다

    for (int i = 0; i < v.size(); i++) {
        printf("%d ", v[i]);
    }

	return 0;
}