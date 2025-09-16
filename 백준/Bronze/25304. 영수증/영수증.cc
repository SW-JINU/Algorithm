#include <iostream>
#include <vector>
#include <algorithm> // sort 사용
using namespace std;

int main() {
    int X;
    cin >> X;
    int N;
    cin >> N;
    int total = 0;
    for (int tc = 1; tc <= N; tc++) {
        int a, b;
        cin >> a >> b;
        total += a * b;
    }
    if (X == total) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
