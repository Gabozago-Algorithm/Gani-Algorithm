// [10807] ���� ����

/*
�� N���� ������ �־����� ��, 
���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����. 
��° �ٿ��� ������ �������� ���еǾ����ִ�. 
��° �ٿ��� ã������ �ϴ� ���� v�� �־�����. 

�Է����� �־����� ������ v�� -100���� ũ�ų� ������, 
100���� �۰ų� ����.

���
ù° �ٿ� �Է����� �־��� N���� ���� �߿� v�� �� ������ ����Ѵ�.
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
	int n, v;
	int arr[101] = {0, };
	int ans = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// ã�� ����
	cin >> v;

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) {
			ans++;
		}
	}
		
	cout << ans << endl;
	return 0;
}