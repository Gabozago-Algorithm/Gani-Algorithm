// [1037] ���

/*
��� A�� N�� ��¥ ����� �Ƿ���, N�� A�� ����̰�, A�� 1�� N�� �ƴϾ�� �Ѵ�. 
� �� N�� ��¥ ����� ��� �־��� ��, N�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� N�� ��¥ ����� ������ �־�����. 
�� ������ 50���� �۰ų� ���� �ڿ����̴�. 
��° �ٿ��� N�� ��¥ ����� �־�����.
1,000,000���� �۰ų� ����, 2���� ũ�ų� ���� �ڿ����̰�, �ߺ����� �ʴ´�.

���
ù° �ٿ� N�� ����Ѵ�. N�� �׻� 32��Ʈ ��ȣ�ִ� ������ ǥ���� �� �ִ�.
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
    int arr[51];
    int n;
    // ��¥ ����� ����
    cin >> n;

    for (int i = 0; i < n; i++) {
        // N�� ��¥ ���
        cin >> arr[i];
    }

    // 1�� N�� �� �������� ��¥ ���
    sort(arr, arr + n);
    
    // �ּڰ��� �ִ��� ���Ѱ� N
    int ans = arr[0] * arr[n - 1];
    cout << ans;
	return 0;
}