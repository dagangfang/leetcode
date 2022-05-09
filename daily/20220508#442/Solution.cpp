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
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ret;
        int t = 0;
        for (int i = 0;i < nums.size();++i)
        {
            if (nums[i] == t)
            {
                ret.push_back(t);
            }
            t = nums[i];
        }
        return ret;
    }
};


int main()
{
    // Solution s = Solution();
    // // int n = 8;
    // int ret = s.numSubarrayProductLessThanK(6, 5);
    // cout << ":" << ret << endl;
    return 1;
}
