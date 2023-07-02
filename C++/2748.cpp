// [2748] �Ǻ���ġ �� 2

/*
�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 
0��° �Ǻ���ġ ���� 0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. 
�� ���� 2��° ���ʹ� �ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.
�̸� ������ �Ẹ�� Fn = Fn-1 + Fn-2 (n �� 2)�� �ȴ�.

n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ�

�Է�
ù° �ٿ� n�� �־�����. n�� 90���� �۰ų� ���� �ڿ���

���
ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�
*/

// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
using namespace std;

//  N�� Ŀ������ ���� �޼ӵ��� �����ϹǷ� �ڷ����� long long�� ���
long long fiboarr[100] = { 0,1, };

long long fibo(int n)
{
    if (n == 0 || n == 1)
        return fiboarr[n];
    else if (fiboarr[n] == 0)
        fiboarr[n] = fibo(n - 1) + fibo(n - 2);
    return fiboarr[n];
}

int main() {
    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
} 
