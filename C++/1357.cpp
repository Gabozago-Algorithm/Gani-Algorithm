// [1357] ������ ���� 

/*
� �� X�� �־����� ��, X�� ��� �ڸ����� ������ �� ���� ���� �� �ִ�. 
Rev(X)�� X�� ��� �ڸ����� �������� ����� �Լ���� ����. 
���� ���, X=123�� ��, Rev(X) = 321�̴�. �׸���, X=100�� ��, Rev(X) = 1�̴�.

�� ���� ���� X�� Y�� �־����� ��, Rev(Rev(X) + Rev(Y))�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է�
ù° �ٿ� �� X�� Y�� �־�����. X�� Y�� 1,000���� �۰ų� ���� �ڿ����̴�.

���
ù° �ٿ� ������ ������ ����Ѵ�.
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
	int x, y;
	int sum;
	string a;
	string b;
	string result;

	cin >> a >> b;

	// �� X�� Y �� reverse
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	// string �� int �� ��ȯ
	x = stoi(a);
	y = stoi(b);

	sum = x + y;

	// ���Ѱ� �ٽ� reverse
	result = to_string(sum);
	reverse(result.begin(), result.end());

	cout << stoi(result) << endl;
    return 0;
}