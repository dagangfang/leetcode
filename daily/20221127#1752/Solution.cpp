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
    bool check(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        for (int i = 0;i < n;++i)
        {
            if (flag == 1 && nums[i] > nums[0])
            {
                return false;
            }
            int j = i + 1;
            if (j < n && nums[i] > nums[j])
            {
                ++flag;
                if (flag > 1)
                    return false;
            }
        }
        return true;
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

