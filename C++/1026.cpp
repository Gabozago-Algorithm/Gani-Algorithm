// [1026] ����

/*
���� ������ ������ �׻� ū ��ĩ�Ÿ����� ���� �־���. 
�� ������ ���� �������� ������ ���� ������ ���� ū ����� �ɾ���.

���̰� N�� ���� �迭 A�� B�� �ִ�. ������ ���� �Լ� S�� ��������.
S = A[0] �� B[0] + ... + A[N-1] �� B[N-1]

S�� ���� ���� �۰� ����� ���� A�� ���� ��迭����. 
��, B�� �ִ� ���� ��迭�ϸ� �� �ȴ�.
S�� �ּڰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� N�� �־�����. 
��° �ٿ��� A�� �ִ� N���� ���� ������� �־�����, 
��° �ٿ��� B�� �ִ� ���� ������� �־�����. 
N�� 50���� �۰ų� ���� �ڿ����̰�, 
A�� B�� �� ���Ҵ� 100���� �۰ų� ���� ���� �ƴ� �����̴�

���
ù° �ٿ� S�� �ּڰ��� ����Ѵ�.
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
	vector<int> a;
	vector<int> b;
	int N;
	int num;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		a.push_back(num);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		b.push_back(num);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<>());
	int res = 0;
	for (int i = 0; i < N; i++) {
		res += a[i] * b[i];
	}
	cout << res;
    return 0;
}