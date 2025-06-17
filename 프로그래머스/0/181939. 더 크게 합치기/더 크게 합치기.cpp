#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    
    int result_ab = stoi(ab);
    int result_ba = stoi(ba);
    
    if (result_ab < result_ba) {
        answer = result_ba;
    } else {
        answer = result_ab;
    }
    
    return answer;
}