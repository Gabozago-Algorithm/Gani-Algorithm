// [2822] ���� ���

/*
����̴� ������� PD�̴�. 
�� ������� �����ڴ� �� 8�� ������ Ǭ��. 
�����ڴ� �� ������ Ǯ��, �� ������ Ǯ���� �� ��� ������ ������ Ǯ�� ������ �ð����� 
����� �ð��� ���̵��� �����Ѵ�. 

������ Ǯ�� ���� ��쿡�� 0���� �޴´�. 
�������� �� ������ ���� ���� ���� 5���� ���̴�.

�Է�
8�� �ٿ� ���ļ� �� ������ ���� �������� ������ �־�����. 
������ 0���� ũ�ų� ����, 150���� �۰ų� ����. 
��� ������ ���� ������ ���� �ٸ���. 
�Է����� �־����� ������� 1�� ����, 2�� ����, ... 8�� �����̴�.

���
ù° �ٿ� �������� ������ ����Ѵ�. 
��° �ٿ��� � ������ ���� ������ ���ԵǴ����� �������� �����Ͽ� ����Ѵ�. 
����� ���� ��ȣ�� �����ϴ� �����̾�� �Ѵ�.
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
	int num;
	int sum = 0;
	vector<pair<int, int> > v;
	vector<int> index;

	for (int i = 1; i <= 8; ++i) {
		// 8�� �ٿ� ���ļ� �� ������ ���� �������� ����
		cin >> num;
		v.push_back(make_pair(num, i));
	}

	sort(v.begin(), v.end(), greater<pair<int, int> >());

	for (int i = 0; i < 5; ++i) {
		sum += v[i].first;
		index.push_back(v[i].second);
	}

	// �������� ����
	cout << sum << endl;

	sort(index.begin(), index.end());

	for (int i = 0; i < 5; ++i) {
		// � ������ ���� ������ ���ԵǴ���
		cout << index[i] << " ";
	}
	cout << endl;
	return 0;
}