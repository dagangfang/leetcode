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
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        vector<int> ret(n, 0);
        for (int i = 0;i < n;++i)
        {
            for (int j = 0;j < n;++j)
            {
                int t = i + j;
                if (t >= n)
                    t -= n;
                ret[j] += nums[i] * t;
            }
        }
        sort(ret.begin(), ret.end());
        return ret[n - 1];
    }
};


int main()
{
    Solution s = Solution();
    vector<int> nums = { 4,3,2,6 };
    int ret = s.maxRotateFunction(nums);
    cout << ":" << ret << endl;
    return 1;
}
