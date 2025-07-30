#include <string>
#include <vector>

using namespace std;

bool isValid(int n) {
    string s = to_string(n);
    for (char c : s) {
        if (c !='0' && c !='5') return false;
    }
    return true;
}

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i = l; i <= r; i++) {
        if (isValid(i)) {
            answer.push_back(i);
        }
    }
    
    if (answer.empty()) return {-1};
        
    return answer;
}