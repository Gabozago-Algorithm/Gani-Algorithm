// [2720] ��Ź�� ���� ����

/*
�̱����� ���а� �����̴� ��Ź�Ҹ� ��ϰ� �ִ�. �����̴� �ֱٿ� �Ƹ�����Ʈ�� �����л� ������ ä���ߴ�.
�����̴� ���Ͽ��� �Ǹ��ߴ�.

������ �Ž������� �ִ� ���� �ڲ� �Ǽ��Ѵ�.
������ $0.5�޷��� ����ϴ� ��쿡 �Ž��������� $5�޷��� �ִ°��̴�!

��¿�� ���� �پ �ڵ� �Ƿ��� ������ ������ �����ִ� ���α׷��� �ۼ��Ϸ��� ������, 
��ƺ��θ� �ϴ��� �ڵ��� �ð��� ��� �� ������ �а� �ִ� �������� ��� ���־�� �Ѵ�.

�Ž������� �׼��� �־����� ������ ����� 
����(Quarter, $0.25)�� ����, ����(Dime, $0.10)�� ����, ����(Nickel, $0.05)�� ����, ���(Penny, $0.01)�� ������ ���ϴ� ���α׷�
�Ž������� �׻� $5.00 �����̰�, �մ��� �޴� ������ ������ �ּҷ� �Ϸ��� �Ѵ�.

���� ���, $1.24�� �Ž��� �־�� �Ѵٸ�, �մ��� 4����, 2����, 0����, 4��ϸ� �ް� �ȴ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. 
�� �׽�Ʈ ���̽��� �Ž����� C�� ��Ÿ���� ���� �ϳ��� �̷���� �ִ�. 
C�� ������ ��Ʈ�̴�. (1�޷� = 100��Ʈ) (1<=C<=500)

���
�� �׽�Ʈ���̽��� ���� �ʿ��� ������ ����, ������ ����, ������ ����, ����� ������ �������� �����Ͽ� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

// ����(Quarter, $0.25)�� ����, ����(Dime, $0.10)�� ����, ����(Nickel, $0.05)�� ����, ���(Penny, $0.01)
int arr[4] = { 25,10,5,1 };

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int charge;
		cin >> charge;

		for (int j = 0; j < 4; j++) {
			int cnt = charge / arr[j];
			charge -= (charge / arr[j]) * arr[j];
			cout << cnt << " ";
		}
		cout << "\n";
	}
	return 0;
}