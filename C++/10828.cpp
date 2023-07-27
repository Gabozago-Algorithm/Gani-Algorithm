// [10828] ����

/*
������ �����ϴ� ������ ������ ����,
�Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� �ټ� �����̴�.

push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. 
���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. 
���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

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
using namespace std;

// ���� Ŭ���� ����
class Stack {
public:
	int stack[10000]; // ������ �ϳ��� �迭
	// size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
	int size;

	Stack() { size = 0; }

	// push X : ���� X�� ���ÿ� �ִ� �����̴�.
	void push(int data) {
		stack[size] = data;
		size += 1;
	}

	// empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	bool empty() {
		if (size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�.
	// ���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
	int pop() {
		if (empty())
		{
			return -1;
		}
		else
		{
			stack[size - 1] = 0;
			size -= 1;
			return stack[size];
		}
	}

	// top : ������ ���� ���� �ִ� ������ ����Ѵ�.
	// ���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
	int top() {
		if (empty())
		{
			return -1;
		}
		else
		{
			return stack[size - 1];
		}
	}
};

int main() {
	// �־����� ����� �� N
	int N;
	cin >> N;

	Stack st;

	for (int i = 0; i < N; i++)
	{
		string cmd;
		// push, pop, empty, size, top �� �Է¹���
		cin >> cmd; 

		if (cmd == "push")
		{
			int data;
			cin >> data;
			st.push(data);
		}
		else if (cmd == "pop")
		{
			// ���ÿ� ����ִ� ������ ���� ��쿡�� -1
			cout << (st.empty() ? -1 : st.top()) << '\n';
			if (!st.empty())
			{
				st.pop();
			}
		}
		else if (cmd == "size")
		{
			cout << st.size << '\n';
		}
		else if (cmd == "empty")
		{
			cout << st.empty() << '\n';
		}
		else if (cmd == "top")
		{
			cout << st.top() << '\n';
		}
	}

	return 0;
}