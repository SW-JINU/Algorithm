#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    int A;
    char B[1001];
    scanf("%d", &A);
    scanf("%s", B);
    int len = strlen(B);
    for (int i = len - 1; i >= 0; i--) {
        int num = B[i] - '0';
        int C = A * num;
        printf("%d\n", C);
    }
    printf("%d\n", A * atoi(B));
    return 0;
}
