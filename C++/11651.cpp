// [11651] ��ǥ �����ϱ� 2

/*
2���� ��� ���� �� N���� �־�����. 
��ǥ�� y��ǥ�� �����ϴ� ������, y��ǥ�� ������ x��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ�

�Է�
ù° �ٿ� ���� ���� N (1 �� N �� 100,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� i������ ��ġ xi�� yi�� �־�����. 
(-100,000 �� xi, yi �� 100,000) ��ǥ�� �׻� �����̰�, ��ġ�� ���� �� ���� ����

���
ù° �ٺ��� N���� �ٿ� ���� ������ ����� ����Ѵ�
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({ y, x });
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i].second << " " << v[i].first << "\n";
    }
}