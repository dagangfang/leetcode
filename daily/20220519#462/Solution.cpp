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
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int mid = n / 2;
        sort(nums.begin(), nums.end());
        long int sum = 0;
        for (int i = 0;i < n;++i)
        {
            if (i < mid)
            {
                sum += nums[mid] - nums[i];

            }
            else
            {
                sum += nums[i] - nums[mid];
            }
        }
        return sum;
    }
};


int main()
{
    Solution s = Solution();
    vector<int> nums = { 203125577,-349566234,230332704,48321315,66379082,386516853,50986744,-250908656,-425653504,-212123143 };
    int ret = s.minMoves2(nums);
    cout << ":" << ret << endl;

    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
