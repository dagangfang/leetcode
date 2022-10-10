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
    int maxAscendingSum(vector<int>& nums) {
        int last = nums[0];
        int tmpMax = last;
        int maxRet = tmpMax;
        for (int i = 1;i < nums.size();++i)
        {
            if (nums[i] <= last)
            {
                maxRet = max(maxRet, tmpMax);
                tmpMax = 0;
            }
            last = nums[i];
            tmpMax += last;
        }
        maxRet = max(maxRet, tmpMax);
        return maxRet;
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

