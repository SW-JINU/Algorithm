#include <iostream>
#include <vector>
#include <algorithm> // sort 사용
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= 9; i++) {
        int result = N * i;
        cout << N << " * " << i << " = " << result << endl;
    }
    return 0;
}
