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
#include<numeric>

using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int curr = 0;
        for (int i = nums.size() - 1; i >= 0; --i) {
            curr += nums[i];
            ans.emplace_back(nums[i]);
            if (total - curr < curr) {
                break;
            }
        }
        return ans;
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
