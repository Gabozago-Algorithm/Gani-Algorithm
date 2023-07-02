// [10984] �� ������ ������

/*
�ڽ��� ���� ����� ������ �ñ�������. 
�л�ý��۵� ���� �������ϴ� �ٿ츦 ���� �����ֵ��� ����

�Է�
ù ��° �ٿ� �б��� �� T�� �־�����. 
�� ��° �ٺ��� T�� �б⿡ ���� ������ �־�����.
�� �б⿡ ���� ������ ������ ���� �����Ǿ� �ִ�. 
ù ��° �ٿ� ����� ������ �� N�� �־�����, 
���� N�� �ٿ� ���ļ� N�� ������� ���� C�� ���� G
(1 �� N �� 10, 1 �� C �� 6, C�� ����)
G�� {0, 0.7, 1, 1.3, 1.7, 2, 2.3, 2.7, 3, 3.3, 3.7, 4, 4.3} �� �ϳ��̸� 
�Ҽ� �κ��� �ִ� �� �ڸ����� �־�����.

���
�� �б⿡ ���� �ٿ��� �� ������ ����(GPA)�� ���
������� ���� ������ 10^1���� ����Ѵ�
*/

// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <vector>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	// �б� ��
	int n;
	cin >> n;

	// �Ҽ��� n�� �ڸ������� �ݿø�
	cout << fixed;
	cout.precision(1);

	while (n--) {
		// ���� ����
		int num;
		cin >> num;
		// ������ ����
		vector<pair<int, float>>grade(num);
		int sum = 0;
		float average = 0;

		for (int i = 0; i < num; i++) {
			cin >> grade[i].first >> grade[i].second;
		}
		for (int i = 0; i < num; i++) {
			sum += grade[i].first;
			average += grade[i].first * grade[i].second;
		}
		cout << sum << " " << average / sum << "\n";
	}
	return 0;
}