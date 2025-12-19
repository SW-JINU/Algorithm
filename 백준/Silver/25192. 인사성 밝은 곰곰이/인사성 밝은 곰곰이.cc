#include <iostream>  // 표준 입출력 사용
#include <set>       // 중복을 허용하지 않는 set 컨테이너 사용

using namespace std;

int main() {
    int N;
    cin >> N;  // 입력되는 채팅 로그 개수

    set<string> users;  // 현재 세션에서 등장한 사용자 이름 저장 (중복 제거)
    string user;        // 입력받을 사용자 이름
    int cnt = 0;        // 인사 횟수(새로운 사용자 수) 카운트

    for (int i = 0; i < N; i++) {
        cin >> user;    // 사용자 이름 또는 "ENTER" 입력

        // 새로운 채팅방이 열리는 경우
        if (user == "ENTER") {
            users.clear();  // 이전 채팅방 기록 초기화
            continue;       // 다음 입력으로 이동
        }
        else {
            // 현재 채팅방에서 처음 등장한 사용자라면
            if (users.find(user) == users.end()) {
                users.insert(user); // 사용자 이름 저장
                cnt++;              // 인사 횟수 증가
            }
        }
    }

    cout << cnt << "\n";  // 전체 인사 횟수 출력

    return 0;
}
