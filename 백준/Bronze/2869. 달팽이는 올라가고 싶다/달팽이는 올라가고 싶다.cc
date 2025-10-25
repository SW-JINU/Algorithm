#include <iostream>
using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    int x = (V - A) / (A - B);

    if ((V - A) % (A - B) != 0) {
        x += 1;
    }

    int cnt = x + 1;

    cout << cnt << "\n";
    return 0;
}
