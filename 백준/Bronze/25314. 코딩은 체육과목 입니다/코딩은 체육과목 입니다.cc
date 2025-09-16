#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // sort 사용
using namespace std;

int main() {
    int N;
    cin >> N;
    int x = N / 4;
    if (N % 4 == 0) {
        string y = "";
        for (int i = 1; i <= x; i++) {
            y += "long ";
        }
        cout << y << "int" << endl;
    }
    return 0;
}
