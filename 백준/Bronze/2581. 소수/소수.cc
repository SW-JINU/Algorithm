#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<bool> isPrime(N + 1, true); // 0~N까지 소수 여부

    isPrime[0] = isPrime[1] = false; // 0과 1은 소수가 아님

    // 에라토스테네스의 체
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false; // i의 배수는 소수가 아님
            }
        }
    }

    int sum = 0;
    int minPrime = -1;

    // M~N 사이 소수 합과 최소 소수 찾기
    for (int i = M; i <= N; i++) {
        if (isPrime[i]) {
            sum += i;
            if (minPrime == -1) minPrime = i; // 최소 소수 저장
        }
    }

    if (minPrime == -1) { // 소수가 없는 경우
        cout << -1 << "\n";
    } else {
        cout << sum << "\n" << minPrime << "\n";
    }

    return 0;
}
