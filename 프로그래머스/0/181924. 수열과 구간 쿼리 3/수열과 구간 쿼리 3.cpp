#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for (int idx = 0; idx < queries.size(); idx++) {
        int i = queries[idx][0];
        int j = queries[idx][1];
        int temp = answer[i];
        answer[i] = answer[j];
        answer[j] = temp;
    }
    
    return answer;
}