// [2920] ����

/*
�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�.
�� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�.
c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

1���� 8���� ���ʴ�� �����Ѵٸ� ascending,
8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.

������ ������ �־����� ��, �̰��� ascending����, descending����,
�ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.


�Է�
ù° �ٿ� 8�� ���ڰ� �־�����.
�� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� ����

���
ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int a[8];
	int asc = 0, des = 0;

	for (int i = 0; i < 8; i++) {
		cin >> a[i];

		if (a[i] == i + 1) {
			asc += 1;
		}
		else if (a[i] == 8 - i) {
			des += 1;
		}
	}

	if (asc == 8) {
		cout << "ascending";
	}
	else if (des == 8) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
	return 0;
}