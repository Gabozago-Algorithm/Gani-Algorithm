// [2748] 피보나치 수 2

/*
피보나치 수는 0과 1로 시작한다. 
0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1이다. 
그 다음 2번째 부터는 바로 앞 두 피보나치 수의 합이 된다.
이를 식으로 써보면 Fn = Fn-1 + Fn-2 (n ≥ 2)가 된다.

n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성

입력
첫째 줄에 n이 주어진다. n은 90보다 작거나 같은 자연수

출력
첫째 줄에 n번째 피보나치 수를 출력한다
*/

// 표준 스트림에서 읽기 및 쓰기를 제어하는 개체를 선언
#include <iostream>
using namespace std;

//  N이 커질수록 값이 급속도로 증가하므로 자료형은 long long을 사용
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
