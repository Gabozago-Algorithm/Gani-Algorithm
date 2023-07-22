// [4493] ���� ���� ��?

/*
���� ���� ���� �� ���̼� �ϴ� �����̴�. 
���� �̸� ���س��� �� ��ŭ ������ �ϰ�, ���� ������ �̱� ����� ���� ���ڰ� �ȴ�

���� ���� ���� �� Ƚ���� �Ź� �� ���� ������ �´����� �־����� ��, 
���� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������ ������ �̱��.
������ ���� �̱��.
���� ������ �̱��.

�Է�
ù° �ٿ��� �׽�Ʈ ���̽��� ���� t(0 < t < 1000)�� �־�����. 
�� �׽�Ʈ ���̽��� ù° �ٿ��� ���� ���� ���� �� Ƚ�� n(0 < n < 100)
���� n���� �ٿ��� R, P, S�� �������� ���еǾ� �־�����. 

R, P, S�� ������� ����, ��, �����̰� 
ù ��° ���ڴ� Player 1�� ����, 
�� ��° ���ڴ� Player 2�� �����̴�.

���
�� �׽�Ʈ ���̽��� ���ؼ� ���ڸ� ����Ѵ�.
(Player 1 �Ǵ� Player 2) ����, ����� ��쿡�� TIE�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
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