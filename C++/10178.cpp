// [10178] �ҷ����� ����

/*
�ҷ������̿� �ѽ��̳״� �ƺ����� ������ �����ֽŴ�.
������ �ѽ����� �������� ���� ���̰� �����ʾ� 
������ �Ѿ�� ������ �����ϰ� ������ ���� ������ ���� �ο��� ����.

�ų� �ҷ������̶����� �ƺ����� ������ �ڽĵ鿡�� �ִ��� ���� ������ ������ �ֽñ� ���ϸ� 
�ڽſ��Դ� ��� ���ԵǴ����� �˰� �;� �ϽŴ�.
�̷� �ƺ����� ���ͼ� �������� �ο��� ���ƺ���.

�Է�
���� ù ��° �ٿ��� �׽�Ʈ ���̽��� ���� �Էµǰ�, 
�� �׽�Ʈ ���̽����� ������ ���� c�� ������ �� v�� ���ʴ�� �Է�

���
��You get __ piece(s) and your dad gets __ piece(s).�� ���Ŀ� ���߾� �����ϰ� ���
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n = 0;
	int childs = 0;
	int father = 0;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &childs, &father);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", childs / father, childs % father);
	}
}