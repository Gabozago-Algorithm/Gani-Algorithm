// [11047] ���� 0

/*
�ر԰� ������ �ִ� ������ �� N�����̰�, ������ ������ �ſ� ���� ������ �ִ�.

������ ������ ����ؼ� �� ��ġ�� ���� K�� ������� �Ѵ�. 
�̶� �ʿ��� ���� ������ �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� N�� K�� �־�����. (1 �� N �� 10, 1 �� K �� 100,000,000)
��° �ٺ��� N���� �ٿ� ������ ��ġ Ai�� ������������ �־�����.
(1 �� Ai �� 1,000,000, A1 = 1, i �� 2�� ��쿡 Ai�� Ai-1�� ���)

���
ù° �ٿ� K���� ����µ� �ʿ��� ���� ������ �ּڰ��� ����Ѵ�.

*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
#include <queue>
using namespace std;

int main() {
	int N, K;
	int A[10];

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	} //A1 = 1, Ai�� A(i-1)�� ���

	int count = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (A[i] <= K) {
			count = count + K / A[i];
			K = K % A[i];
		}
		if (K == 0)
			break;
	}

	cout << count << endl;
	return 0;
}