#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int len = my_string.size();
    for(int i = 0; i <= len; i++) {
        string word = my_string.substr(len - i, i);
        if(word == is_suffix) {
            answer = 1;
        }
    }
    return answer;
}