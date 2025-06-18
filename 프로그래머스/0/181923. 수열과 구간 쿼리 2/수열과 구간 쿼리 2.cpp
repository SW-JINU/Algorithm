#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (int idx = 0; idx < queries.size(); idx++) {
        int s = queries[idx][0];
        int e = queries[idx][1];
        int k = queries[idx][2];
        
        int i = -1;
        for (int j = s; j <= e ; j++){
            if ((i == -1 && arr[j] > k) || (arr[j] > k && arr[j] < i)) {
                i = arr[j];
            } 
        }
        answer.push_back(i);
    }
    return answer;
}