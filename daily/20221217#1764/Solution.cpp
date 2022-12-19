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
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int n = nums.size();
        int n2 = groups.size();
        int j = 0;
        int k = 0;
        int lastI = 0;
        for (int i = 0;i < n;++i)
        {
            if (nums[i] == groups[j][k])
            {
                if (k == 0)
                    lastI = i;
                // printf("%d %d %d %d\n",k,lastI,i,j);
                ++k;
                if (k == groups[j].size())
                {
                    ++j;
                    if (j == n2)
                    {
                        return true;
                    }
                    k = 0;
                }
            }
            else
            {
                if (k != 0)
                    i = lastI;
                k = 0;
            }
        }
        return false;
    }
};





int main()
{
    // Solution s = Solution();

}

