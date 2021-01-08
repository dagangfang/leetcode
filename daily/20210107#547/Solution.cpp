#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <deque>
#include <limits.h>
#include <string.h>

using namespace std;

class Solution
{
public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        int sum = 1;
        vector<int> v = vector<int>();
        for (int i = 1; i < n; ++i)
        {
            if (isConnected[0][i] == 0)
            {
                for (int j = i + 1; j < n; ++j)
                {
                    if (isConnected[i][j] == 1)
                    {
                        isConnected[0][j] = 1;
                    }
                }
            }
        }
        for (int i = 1; i < n; ++i)
        {
            if (isConnected[0][i] == 0)
            {
                ++sum;
            }
        }
        return sum;
    }
};

// class Solution {
// public:
//     void dfs(vector<vector<int>>& isConnected, vector<int>& visited, int provinces, int i) {
//         for (int j = 0; j < provinces; j++) {
//             if (isConnected[i][j] == 1 && !visited[j]) {
//                 visited[j] = 1;
//                 dfs(isConnected, visited, provinces, j);
//             }
//         }
//     }

//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int provinces = isConnected.size();
//         vector<int> visited(provinces);
//         int circles = 0;
//         for (int i = 0; i < provinces; i++) {
//             if (!visited[i]) {
//                 dfs(isConnected, visited, provinces, i);
//                 circles++;
//             }
//         }
//         return circles;
//     }
// };


int main()
{
    Solution s = Solution();
    // vector<int> in = vector<int>{2, 7, 4, 1, 8, 1};
    // printf("结果：%d \n", s.fib(7));
    unordered_map<int, int> m = unordered_map<int, int>();
    cout << m[1] << endl;
    m[2] = 0;
    cout << m[2] << endl;
    printf("%d %d\n", m[1], m[2]);
    return 1;
}
