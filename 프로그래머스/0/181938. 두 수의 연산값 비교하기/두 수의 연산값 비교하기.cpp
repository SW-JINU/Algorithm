#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string ab = to_string(a) + to_string(b);
    
    int result1 = stoi(ab);
    int result2 = 2 * a * b;
        
    if (result1 < result2 ) {
        answer = result2;
    } else {
        answer = result1;
    }
    
    return answer;
}