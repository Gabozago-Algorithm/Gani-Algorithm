// [4493] 가위 바위 보?

/*
가위 바위 보는 두 명이서 하는 게임이다. 
보통 미리 정해놓은 수 만큼 게임을 하고, 많은 게임을 이긴 사람이 최종 승자가 된다

가위 바위 보를 한 횟수와 매번 두 명이 무엇을 냈는지가 주어졌을 때, 
최종 승자를 출력하는 프로그램을 작성하시오.

바위는 가위를 이긴다.
가위는 보를 이긴다.
보는 바위를 이긴다.

입력
첫째 줄에는 테스트 케이스의 개수 t(0 < t < 1000)가 주어진다. 
각 테스트 케이스의 첫째 줄에는 가위 바위 보를 한 횟수 n(0 < n < 100)
다음 n개의 줄에는 R, P, S가 공백으로 구분되어 주어진다. 

R, P, S는 순서대로 바위, 보, 가위이고 
첫 번째 문자는 Player 1의 선택, 
두 번째 문자는 Player 2의 선택이다.

출력
각 테스트 케이스에 대해서 승자를 출력한다.
(Player 1 또는 Player 2) 만약, 비겼을 경우에는 TIE를 출력한다.
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
    int t, n;
    cin >> t;

    char p1, p2;
    
    for (int i = 0; i < t; i++) {
        int p1w = 0, p2w = 0;
        cin >> a;

        for (int i = 0; i < n; i++) {
            cin >> p1 >> p2;

            if (p1 == 'R') {
                if (p2 == 'R') {
                    p1w++;
                    p2w++;
                }
                else if (p2 == 'S') {
                    p1w++;
                }
                if (p2 == 'P') {
                    p2w++;
                }
            }

            else if (p1 == 'S') {
                if (p2 == 'R') {
                    p2w++;
                }
                else if (p2 == 'S') {
                    p1w++;
                    p2w++;
                }
                if (p2 == 'P') {
                    p1w++;
                }
            }

            else if (p1 == 'P') {
                if (p2 == 'R') {
                    p1w++;
                }
                else if (p2 == 'S') {
                    p2w++;
                }
                if (p2 == 'P') {
                    p1w++;
                    p2w++;
                }
            }
        }
        if (p1w > p2w) cout << "Player 1" << "\n";
        else if (p2w > p1w) cout << "Player 2" << "\n";
        else if (p1w == p2w) cout << "TIE" << "\n";
    }
    return 0;
}