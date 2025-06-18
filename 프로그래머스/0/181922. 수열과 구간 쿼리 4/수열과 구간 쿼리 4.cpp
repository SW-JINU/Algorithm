#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int idx = 0; idx < queries.size(); idx++) {
        int s = queries[idx][0];
        int e = queries[idx][1];
        int k = queries[idx][2];
        
        int x = 0;
        for (int i = s; i <= e; i++) {
            if (i % k == 0) {
                    arr[i] += 1;
                }
            } 
        }
    return arr;
}