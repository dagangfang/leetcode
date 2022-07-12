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
#include <stack>
#include <string>
#include <list>
#include <queue>

using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> v = vector<vector<int>>(m, vector<int>(n, 0));
        for (int i = 0;i < indices.size();++i)
        {
            int m1 = indices[i][0];
            int n1 = indices[i][1];
            for (int j = 0;j < n;++j)
            {
                v[m1][j]++;
            }
            for (int j = 0;j < m;++j)
            {
                v[j][n1]++;
            }
        }
        int ret = 0;
        for (int i = 0;i < m;++i)
        {
            for (int j = 0;j < n;++j)
            {
                if (v[i][j] % 2 == 1)
                {
                    ++ret;
                }
            }
        }
        return ret;
    }
};

int main()
{
    // Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}
