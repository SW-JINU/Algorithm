#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int line = 2;
    int cnt = 2;
    int i = 1;
    int j = 1;
    while (cnt <= X) {
        if (line % 2 == 0) {
            j++;
            i--;
            if (i == 0) {
                line += 1;
                i = 1;
            }
        }
        else {
            i++;
            j--;
            if (j == 0) {
                line += 1;
                j = 1;
            }
        }
        cnt += 1;
    }

    cout << i << "/" << j << "\n";
    return 0;
}
