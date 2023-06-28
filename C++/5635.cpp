// [5635] ���� 

/*
� �ݿ� �ִ� �л����� ������ �־����� ��, 
���� ���̰� ���� ����� ���� ���� ����� ���ϴ� ���α׷�

�Է�
ù° �ٿ� �ݿ� �ִ� �л��� �� n�� �־�����. (1 �� n �� 100)
���� n�� �ٿ��� �� �л��� �̸��� ������ "�̸� dd mm yyyy"�� ���� ����
�̸��� �� �л��� �̸��̸�, �ִ� 15���ڷ� �̷���� �ִ�. 
dd mm yyyy�� ���� ��, ��, �����̴�.(1990 �� yyyy �� 2010, 1 �� mm �� 12, 1 �� dd �� 31)
�־����� ������ �ùٸ� ��¥�̸�, ��, �� ���� 0���� �������� �ʴ´�.
�̸��� ���ų�, ������ ���� ����� ����.

���
ù° �ٿ� ���� ���̰� ���� ����� �̸�, 
��° �ٿ� ���� ���̰� ���� ��� �̸��� ���
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char **argv)
{
	// ���� �ӵ��� ���̱� ����
	// ����ȭ : �⺻������ C++�� C�� ǥ�� ��Ʈ���� ����ȭ (������ ���� ����)
	// �񵿱�ȭ : C++ ǥ�� ��Ʈ���� ���������� IO ���۸��� �ϰ� �Ǿ� ���� ���� ������� ���� ��� ������ ���� ������
	ios_base::sync_with_stdio(false);
	
	// ���� : �Է¿�û�� ������ �� ���� ��� �۾��� �־��� ���(��� ���ۿ� ������ �ִ� ���) ���۸� ���(flush) ���
	// cin.tie(NULL); : �Է°� ��� ������ �����ش� (����� ������ ������� �� ����)
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	// ��, ��, ��, �̸�
	// Pair<[Type], [Type] > 
	// : 2���� ���� ������ Ÿ���� ���� ����
	// : ������ ����.first ��.second�� ���� ����
	vector<pair<pair<int, int>, pair<int, string>>> student(n);
	
	for (int i = 0; i < n; i++) {
		// "�̸� dd mm yyyy"
		cin >> student[i].second.second >> student[i].second.first >> student[i].first.second >> student[i].first.first;
	}
	// ��, ��, �� �� ����
	// �̸� ��¥�� ��, ���� ��¥�� ��
	sort(student.begin(), student.end());

	cout << student[n - 1].second.second << "\n" << student[0].second.second;
	return 0;
}
	