// [10866] ��

/*
������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ�

����� �� ���� �����̴�.
push_front X: ���� X�� ���� �տ� �ִ´�.
push_back X: ���� X�� ���� �ڿ� �ִ´�.
pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. 
����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. 
����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���� ����ִ� ������ ������ ����Ѵ�.
empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
front: ���� ���� �տ� �ִ� ������ ����Ѵ�. 
���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. 
���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�
ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. 
�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. 
������ �������� ���� ����� �־����� ���� ����

���
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
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

	deque<int> DQ;
	int N;

	cin >> N;

	while (N--) {
		string str;
		cin >> str;

		// push_front X: ���� X�� ���� �տ� �ִ´�.
		if (str == "push_front") {
			int X;
			cin >> X;
			DQ.push_front(X);
		}

		// push_back X: ���� X�� ���� �ڿ� �ִ´�.
		else if (str == "push_back") {
			int X;
			cin >> X;
			DQ.push_back(X);
		}

		// pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. 
		// ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		else if (str == "pop_front") {
			if (!DQ.empty()) {
				cout << DQ.front() << "\n";
				DQ.pop_front();
			}
			else
				cout << "-1\n";
		}

		// pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. 
		// ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		else if (str == "pop_back") {
			if (!DQ.empty()) {
				cout << DQ.back() << "\n";
				DQ.pop_back();
			}
			else
				cout << "-1\n";
		}

		// size: ���� ����ִ� ������ ������ ����Ѵ�.
		else if (str == "size") {
			cout << DQ.size() << "\n";
		}

		// empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
		else if (str == "empty") {
			cout << DQ.empty() << "\n";
		}

		// front: ���� ���� �տ� �ִ� ������ ����Ѵ�. 
		// ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		else if (str == "front") {
			if (!DQ.empty()) {
				cout << DQ.front() << "\n";
			}
			else
				cout << "-1\n";
		}

		// back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. 
		// ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		else if (str == "back") {
			if (!DQ.empty()) {
				cout << DQ.back() << "\n";
			}
			else
				cout << "-1\n";
		}
	}
	return 0;
}