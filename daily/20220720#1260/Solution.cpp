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
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int all = m * n;
        k %= all;
        if (k == 0) return grid;
        vector<int> iVecT(k, 0);
        for (int i = all - 1;i > all - 1 - k;--i)
        {
            int row = i / n;
            int column = i % n;
            iVecT[all - 1 - i] = grid[row][column];
        }
        for (int i = all - 1;i >= 0;--i)
        {
            int column = i % n;
            int row = i / n;
            int i2 = i - k;
            if (i2 >= 0)
            {
                int column2 = i2 % n;
                int row2 = i2 / n;
                grid[row][column] = grid[row2][column2];
            }
            else
            {
                grid[row][column] = iVecT[-i2 - 1];
            }
        }
        return grid;
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
