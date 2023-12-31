// [11575] Affine Cipher

/*
서쪽나라에서 특수훈련을 받은 정은이는 동쪽나라로 침투를 하게 되었다. 
뛰어난 스파이였던 정은이는 동쪽나라의 정보를 입수하게 되었고 
정보를 안전하게 서쪽나라로 전달하기 위해 아핀 암호(Affine Cipher)를 이용하기로 하였다.

아핀 암호는 다음과 같은 식을 통해 구할 수 있다.
E(X) = (aX + b) mod 26

A부터 Z까지의 알파벳을 차례대로 0, 1, 2, ... , 25 라고 하자.
a = 3이고, b = 1인 경우에 A를 아핀 암호식에 대입하면 E(0) = (3 × 0 + 1) mod 26 이 되어 암호화된 결과는 B

a와 b, 그리고 알파벳 대문자로만 구성된 평문이 주어졌을 때,
이를 암호문으로 치환하는 프로그램을 작성하라.

입력
입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 50) 가 주어진다.
각 테스트 케이스의 첫 번째 줄에는 두 정수 a와 b(0 < a, b ≤ 1,000,000)의 값이 주어진다.
a는 26과 서로소이다.

각 테스트케이스의 두 번째 줄에는 평문 s가 주어진다. 
평문의 길이 |s|는 0보다 크고 1,000,000보다 작다.

출력
각 테스트 케이스마다 한 줄에 한 개씩 평문 s를 암호문으로 치환한 결과를 출력한다
*/

#define _CRT_SECURE_NO_WARNINGS
// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b;
		string X, newStr;
		cin >> a >> b >> X;
		
		// E(X) = (aX + b) mod 26
		for (int j = 0; j < X.length(); j++) {
			// 아스키코드 변환해서 수식 계산 후 다시 문자로
			int temp = (char)(((a * ((int)X.at(j) - 65) + b) % 26) + 65);
			newStr += temp;
		}
		cout << newStr << "\n";
	}
}