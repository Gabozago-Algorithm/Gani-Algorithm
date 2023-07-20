// [4470] 줄번호

/*
텍스트에서 줄을 입력받은 뒤, 줄 번호를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 줄의 수 N이 주어진다. 둘째 줄부터 N개의 줄에 각 줄의 내용이 주어진다. 
각 줄에 있는 글자의 개수는 50글자를 넘지 않는다

출력
각 문장의 앞에 줄 번호를 추가한 뒤 출력한다. 줄 번호는 1번부터 시작한다. 
줄번호를 추가하는 형식은 출력 예제를 참고하면 된다.
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
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        string str;
        getline(cin, str);

        cin.clear();
        printf("%d. ", i);
        cout << str << '\n';
    }
    
    return 0;
}