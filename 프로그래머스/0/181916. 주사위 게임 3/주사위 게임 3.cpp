#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> dice = {a, b, c, d};
    sort(dice.begin(), dice.end());
    int p = dice[0], q = dice[1], r = dice[2], s = dice[3];
        
    if (p == s) {
        answer = 1111 * p;
    } else if (p == r || q == s) {
        int three, one;
        if (p == r) {
            three = p;
            one = s;
        } else {
            three = q;
            one = p;
        }
        int result = 10 * three + one;
        answer = result * result;
    } else if (p == q && r == s) {
        answer = (p + r) * abs(p - r);
    } else if (p == q) {
        answer = r * s;
    } else if (q == r) {
        answer = p * s;
    } else if (r == s) {
        answer = p * q;
    } else {
        answer = p;
    }
    return answer;
}