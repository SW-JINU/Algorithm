#include <iostream>
#include <vector>
#include <algorithm> // sort 사용
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int A, B;
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}
