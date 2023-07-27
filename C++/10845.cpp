// [10843] ť

/*
������ �����ϴ� ť�� ������ ����, 
�Է����� �־����� ������ ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

������ �� ���� �����̴�.

push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. 
���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. 
���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. 
���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�
ù° �ٿ� �־����� ������ �� N (1 �� N �� 10,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ������ �ϳ��� �־�����. 
�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. 
������ �������� ���� ������ �־����� ���� ����

���
����ؾ��ϴ� ������ �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
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
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> Q;
	int N;

	cin >> N;

	while (N--) {
		string str;
		cin >> str;

		// push X: ���� X�� ť�� �ִ� �����̴�.
		if (str == "push") {
			int X;
			cin >> X;
			Q.push(X);
		}

		// pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. 
		// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		else if (str == "pop") {
			if (!Q.empty()) {
				cout << Q.front() << "\n";
				Q.pop();
			}
			else
				cout << "-1\n";
		}

		// size: ť�� ����ִ� ������ ������ ����Ѵ�.
		else if (str == "size") {
			cout << Q.size() << "\n";
		}

		// empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
		else if (str == "empty") {
			cout << Q.empty() << "\n";
		}

		// front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. 
		// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		else if (str == "front") {
			if (!Q.empty()) {
				cout << Q.front() << "\n";
			}
			else
				cout << "-1\n";
		}

		// back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. 
		// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		else if (str == "back") {
			if (!Q.empty()) {
				cout << Q.back() << "\n";
			}
			else
				cout << "-1\n";
		}

	}
	return 0;
}