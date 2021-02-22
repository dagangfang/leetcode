#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
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
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int t;
        for (int i = 0; i < n - 1; ++i)
        {
            t = matrix[0][i];
            for (int j = 1; j < m && i + j < n; ++j)
            {
                if (t != matrix[j][i + j])
                    return false;
            }
        }
        for (int i = 1; i < m - 1; ++i)
        {
            t = matrix[i][0];
            for (int j = 1; j < n && i + j < m; ++j)
            {
                if (t != matrix[i + j][j])
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    // Solution s = Solution();

    return 1;
}
