#include <iostream>
#include <vector>
#include <algorithm> // sort 사용
using namespace std;

int main() {
    vector<int> x(3); // 주사위 3개 값 저장
    for (int i = 0; i < 3; i++) cin >> x[i];

    sort(x.begin(), x.end()); // 오름차순 정렬

    int result = 0;
    if (x[0] == x[1] && x[1] == x[2]) { // 세 개 모두 같을 때
        result = 10000 + x[0] * 1000;
    }
    else if (x[0] == x[1] || x[1] == x[2]) { // 두 개만 같을 때
        // 정렬되어 있으니 중간 값이 같은 눈
        result = 1000 + x[1] * 100;
    }
    else { // 모두 다를 때
        result = x[2] * 100; // 가장 큰 눈
    }

    cout << result << endl; // 출력
    return 0;
}
