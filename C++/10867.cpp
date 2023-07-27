// [10867] �ߺ� ���� �����ϱ�

/*
N���� ������ �־�����. 
�̶�, N���� ������ ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
���� ������ �� ���� ����Ѵ�.

�Է�
ù° �ٿ� ���� ���� N (1 �� N �� 100,000)�� �־�����. 
��°���� ���ڰ� �־�����. �� ���� ������ 1,000���� �۰ų� ���� �����̴�.

���
ù° �ٿ� ���� ������������ ������ ����� ����Ѵ�. 
�̶�, ���� ���� �� ���� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <algorithm>    // find
#include <string>
#include <cmath>        // abs
#include <vector>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    // N���� ���� ����
    vector<int> v(N); 

    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    // �ߺ� ���Ҹ� vector�� ���� �޺κ� ������ ������ ���� -> �� �޺κ� erase�� ����
    // unique �Լ��� �հ� �� ���Ҹ� ���ϱ� ������ ������ ���� ������ ������Ѵ�

    for (int i = 0; i < v.size(); i++) {
        printf("%d ", v[i]);
    }

	return 0;
}