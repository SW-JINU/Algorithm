#include <iostream>

using namespace std;

// dist[i] : i번 도시에서 i+1번 도시까지의 거리
int dist[100000];
// cost[i] : i번 도시의 기름 가격
int cost[100000];

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;   // 도시의 개수

    // 각 도시 사이의 거리 입력 (N-1개)
    for (int i = 0; i < N - 1; i++) {
        cin >> dist[i];
    }

    // 각 도시의 기름 가격 입력 (N개)
    for (int i = 0; i < N; i++) {
        cin >> cost[i];
    }

    int mn = 10001;        // 지금까지 만난 최소 기름 가격
    long long total = 0;  // 총 비용

    // 왼쪽에서 오른쪽으로 이동하며 계산
    for (int i = 0; i < N; i++) {
        // 현재 도시의 기름값이 더 싸면 최소값 갱신
        if (cost[i] < mn) 
            mn = cost[i];

        // 가장 싼 기름값으로 다음 도시까지 이동
        total += (long long)mn * dist[i];
    }

    // 최소 비용 출력
    cout << total << "\n";

    return 0;
}
