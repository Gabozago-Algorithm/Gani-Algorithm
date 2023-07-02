// [10984] 내 학점을 구해줘

/*
자신의 학점 평균이 얼마일지 궁금해졌다. 
학사시스템도 들어가기 귀찮아하는 근우를 위해 구해주도록 하자

입력
첫 번째 줄에 학기의 수 T가 주어진다. 
두 번째 줄부터 T개 학기에 대한 정보가 주어진다.
각 학기에 대한 정보는 다음과 같이 구성되어 있다. 
첫 번째 줄에 들었던 과목의 수 N이 주어지고, 
다음 N개 줄에 걸쳐서 N개 과목들의 학점 C와 성적 G
(1 ≤ N ≤ 10, 1 ≤ C ≤ 6, C는 정수)
G는 {0, 0.7, 1, 1.3, 1.7, 2, 2.3, 2.7, 3, 3.3, 3.7, 4, 4.3} 중 하나이며 
소수 부분은 최대 한 자리까지 주어진다.

출력
각 학기에 대해 근우의 총 학점과 평점(GPA)을 출력
정답과의 절대 오차는 10^1까지 허용한다
*/

// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <vector>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	// 학기 수
	int n;
	cin >> n;

	// 소수점 n의 자릿수까지 반올림
	cout << fixed;
	cout.precision(1);

	while (n--) {
		// 수업 개수
		int num;
		cin >> num;
		// 학점과 성적
		vector<pair<int, float>>grade(num);
		int sum = 0;
		float average = 0;

		for (int i = 0; i < num; i++) {
			cin >> grade[i].first >> grade[i].second;
		}
		for (int i = 0; i < num; i++) {
			sum += grade[i].first;
			average += grade[i].first * grade[i].second;
		}
		cout << sum << " " << average / sum << "\n";
	}
	return 0;
}