// [2693] N��° ū ��

/*
�迭 A�� �־����� ��, N��° ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�迭 A�� ũ��� �׻� 10�̰�, �ڿ����� ������ �ִ�. N�� �׻� 3�̴�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. 
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, 
�迭 A�� ���� 10���� �������� ���еǾ� �־�����. 
�� ���Ҵ� 1���� ũ�ų� ����, 1,000���� �۰ų� ���� �ڿ����̴�.

���
�� �׽�Ʈ ���̽��� ���� �� �ٿ� �ϳ��� �迭 A���� 3��° ū ���� ����Ѵ�.
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
	int T;
	int arr[10] = { 0, };

	cin >> T;
	for (int j = 0; j < T; j++) {
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 10);
		// ������������ ����������, 8��° ���� ���
		cout << arr[7] << endl;
	}
    return 0;
}