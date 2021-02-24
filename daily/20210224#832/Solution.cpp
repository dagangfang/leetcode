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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        int n = A.size();
        int t;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < (n + 1) / 2; ++j)
            {
                t = A[i][j];
                A[i][j] = A[i][n - 1 - j] == 1 ? 0 : 1;
                if (j != n - 1 - j)
                    A[i][n - 1 - j] = t == 1 ? 0 : 1;
            }
        }
        return A;
    }
};

int main()
{
    // Solution s = Solution();

    return 1;
}
