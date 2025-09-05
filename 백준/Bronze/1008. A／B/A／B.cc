#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int A, B;
    scanf("%d %d", &A, &B);         // int 입력
    double result = (double)A / B;  // double로 변환하여 나눗셈
    printf("%.15f\n", result);      // 소수점 15자리 출력
    return 0;
}
