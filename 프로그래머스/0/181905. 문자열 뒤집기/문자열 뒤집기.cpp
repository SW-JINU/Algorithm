#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    string part = my_string.substr(s, e - s + 1);
    reverse(part.begin(), part.end());
    answer = my_string.substr(0, s) + part + my_string.substr(e + 1);
    return answer;
}