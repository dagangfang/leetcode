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
    int arraySign(vector<int>& nums) {
        int ret = 1;
        for (int i = 0;i < nums.size();++i)
        {
            if (nums[i] == 0)
            {
                return 0;
            }
            else if (nums[i] < 0)
            {
                ret *= -1;
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

