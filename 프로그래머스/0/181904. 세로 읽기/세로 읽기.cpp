#include <string>
#include <vector>
using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int len = my_string.size();
    int rows = len / m;           // 전체 행 개수
    for (int i = 0; i < rows; i++) {
        answer += my_string[i * m + (c - 1)]; // 각 행의 c번째
    }
    return answer;
}
