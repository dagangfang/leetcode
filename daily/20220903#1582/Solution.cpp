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
#include <numeric>

using namespace std;




class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ret = 0;
        int rows = mat.size();
        int cols = mat[0].size();
        for (int i = 0;i < rows;++i)
        {
            int index = -1;
            for (int j = 0;j < cols;++j)
            {
                if (mat[i][j] == 1)
                {
                    if (index >= 0)
                    {
                        index = -1;
                        break;
                    }
                    index = j;
                }
            }
            if (index >= 0)
            {
                for (int k = 0;k < rows;++k)
                {
                    if (k != i && mat[k][index] == 1)
                    {
                        index = -1;
                        break;
                    }
                }
                if (index >= 0)
                    ++ret;
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

