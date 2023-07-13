// [1871] 좋은 자동차 번호판

/*
앨버타의 자동차 번호판은 ABC-0123 (세 글자, 네 숫자)와 같이 두 부분으로 나누어져 있다.
좋은 번호판은 첫 번째 부분의 가치와 두 번째 부분의 가치의 차이가 100을 넘지 않는 번호판이다.

글자로 이루어진 첫 번째 부분의 가치는 글자를 26진법 수처럼 계산한다.
(각 자리가 [A..Z]) 예를 들어, "ABC"의 가치는 28 (0×262 + 1×261 + 2×260)이 된다.
"ABC-0123"은  |28 - 123| ≤ 100 이기 때문에, 좋은 번호판이다.

자동차 번호판이 주어졌을 때, 좋은 번호판인지 아닌지를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 번호판의 수 N (1 ≤ N ≤ 100)이 주어진다.
다음 N개 줄에는 자동차 번호판이 LLL-DDDD 형식으로 주어진다.

출력
각각의 자동차 번호판에 대해서, 좋은 번호판이면 "nice"를, 아니면 "not nice"를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
using namespace std;

int main()
{
    // 번호판의 수 N
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string carNumber;
        cin >> carNumber;

        // 문자열에서 '-'를 찾으면
        int pipe = carNumber.find('-');              

        // 자동차 앞글자
        string front = (carNumber.substr(0, pipe));
        // 자동차 뒤숫자
        // stoi : string 을 int 로 변경
        int back = stoi(carNumber.substr(pipe + 1));

        int a, sum = 0;
        double b;

        // 첫 번째 부분의 가치 (26진법 수)
        for (int i = 0; i < front.length(); i++) {
            char c = front[i];
            
            a = int(c) - 65;             
            b = a * pow(26, front.length() - i - 1);
            sum += b;
        }

        // 첫 번째 부분의 가치 (차이가 100을 넘지 않게 하기)
        int num = abs(sum - back);

        if (num <= 100) {
            cout << "nice" << "\n";
        }
        else {
            cout << "not nice" << "\n";
        }
    }
    return 0;
}