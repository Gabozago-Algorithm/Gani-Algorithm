// [1408] 24

/*
�����̴� Counter Terror Unit (CTU)���� ���ϴ� Ư�����
�����̴� ��� ����� ��Ȯ�ϰ� 24�ð��� �Ǵ� ���� �ذ�
�����̴� 1�ð� ���� ������ ���� �� �־ ���� �ʴ´�
��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �ƴϸ� ���� �ʴ� CTU Ư�����

2008�� 3�� 3�� ������, CTU�� ���б⿡ ���� ����ź�� �����ڴٴ� �׷� ������ �Լ�
CTU�� ���α׷��� �رԴ� �� ����� ���İ� �輱���̶� ���� ��ŷ�� ���� ������
�����̴� �����̸� �ӹ��� �������� ��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �������� �Ѵ�

���� ���� �ð��� 13:52:30�̰�, �ӹ��� ������ �ð��� 14:00:00 �̶�� �����̿��� �����ð��� 00:07:30
��� �ð��� 00:00:00 ~ 23:59:59�� ǥ��
�Է°� ��¿� �־����� ��� �ð��� XX:XX:XX ����
���ڰ� 2�ڸ��� �ƴ� ��쿡�� 0���� ä���

�����̰� �ӹ��� ������ �ð���, ���� �ð��� �־����� ��, 
�����̿��� ���� �ð��� ���ϴ� ���α׷��� �ۼ�

�Է�
ù° �ٿ��� ���� �ð���, ��° �ٿ��� �����̰� �ӹ��� ������ �ð�
�ӹ��� ������ �ð��� ���� �ð��� ���� ���� �־����� �ʴ´�.

���
ù° �ٿ� �����̰� �ӹ��� �����ϴµ� ���� �ð��� 
�������� �־����� �ð��� ���� (XX:XX:XX)�� ���� ���
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
// �� ��ü�� �ϳ��� ��ó�� ó���ؾ� �� �� ��ü ���� ���� �� ����
#include <utility>
// �˰������� �����ϴ� C++ ǥ�� ���̺귯�� �����̳� ���ø� �Լ��� ����
#include <algorithm>
// �پ��� ������ ��ü�� ���Ե� tuple ���ø��� ����
#include <tuple>
// vector�� ���� ���������� ������ ������ ��Ҹ� �����ϴ� �����̳�
#include <vector>
// ����� �̸��� ���ӽ����̽��� std �߰�
#include <string>
// �Ҵ�� �迭 ��ü�� ����� �������� ���� iostreams �۾��� �����ϴ� ���� Ŭ���� ���ø� ����
#include <sstream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, m, s;
	int h2, m2, s2;

	// �־����� �ð��� ���� (XX:XX:XX)
	scanf("%d:%d:%d", &h, &m, &s);		// ����ð�
	scanf("%d:%d:%d", &h2, &m2, &s2);	// �ӹ����۽ð�

	h2 -= h;
	m2 -= m;
	s2 -= s;

	if (s2 < 0) {
		s2 += 60;
		m2 -= 1;
	}
	if (m2 < 0) {
		m2 += 60;
		h2 -= 1;
	}
	if (h2 < 0) {
		h2 += 24;
	}
	
	//%02d : 2�ڸ����� ������ ���ڸ��� 0�� �߰�
	printf("%02d:%02d:%02d", h2, m2, s2);
	return 0;
}