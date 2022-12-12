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
    int minOperations(vector<int>& nums) {
        int ret = 0;
        int n = nums.size();
        int left = nums[0];
        for (int i = 1;i < n;++i)
        {
            if (nums[i] <= left)
            {
                ret += left + 1 - nums[i];
                nums[i] = left + 1;
            }
            left = nums[i];
        }
        return ret;
    }
};



int main()
{
    // Solution s = Solution();

}

