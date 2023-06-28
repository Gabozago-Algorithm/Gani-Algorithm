// [5635] 생일 

/*
어떤 반에 있는 학생들의 생일이 주어졌을 때, 
가장 나이가 적은 사람과 가장 많은 사람을 구하는 프로그램

입력
첫째 줄에 반에 있는 학생의 수 n이 주어진다. (1 ≤ n ≤ 100)
다음 n개 줄에는 각 학생의 이름과 생일이 "이름 dd mm yyyy"와 같은 형식
이름은 그 학생의 이름이며, 최대 15글자로 이루어져 있다. 
dd mm yyyy는 생일 일, 월, 연도이다.(1990 ≤ yyyy ≤ 2010, 1 ≤ mm ≤ 12, 1 ≤ dd ≤ 31)
주어지는 생일은 올바른 날짜이며, 연, 월 일은 0으로 시작하지 않는다.
이름이 같거나, 생일이 같은 사람은 없다.

출력
첫째 줄에 가장 나이가 적은 사람의 이름, 
둘째 줄에 가장 나이가 많은 사람 이름을 출력
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char **argv)
{
	// 실행 속도를 높이기 위해
	// 동기화 : 기본적으로 C++와 C의 표준 스트림은 동기화 (동일한 버퍼 공유)
	// 비동기화 : C++ 표준 스트림이 독립적으로 IO 버퍼링을 하게 되어 많은 양의 입출력이 있을 경우 성능이 많이 좋아짐
	ios_base::sync_with_stdio(false);
	
	// 기존 : 입력요청이 들어오면 그 전에 출력 작업이 있었을 경우(출력 버퍼에 내용이 있는 경우) 버퍼를 비워(flush) 출력
	// cin.tie(NULL); : 입력과 출력 연결을 끊어준다 (입출력 순서를 보장받을 수 없다)
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	// 년, 월, 일, 이름
	// Pair<[Type], [Type] > 
	// : 2개의 각각 지정한 타입의 값을 저장
	// : 저장한 값은.first 와.second로 각각 접근
	vector<pair<pair<int, int>, pair<int, string>>> student(n);
	
	for (int i = 0; i < n; i++) {
		// "이름 dd mm yyyy"
		cin >> student[i].second.second >> student[i].second.first >> student[i].first.second >> student[i].first.first;
	}
	// 년, 월, 일 순 정렬
	// 이른 날짜는 앞, 늦은 날짜는 뒤
	sort(student.begin(), student.end());

	cout << student[n - 1].second.second << "\n" << student[0].second.second;
	return 0;
}
	