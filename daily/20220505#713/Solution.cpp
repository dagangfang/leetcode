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
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ret = 0;
        int n = nums.size();
        int l = 0;
        int ji = 1;
        for (int r = 0;r < n;++r)
        {
            ji *= nums[r];
            printf("%d ", ji);
            while (l <= r && ji >= k)
            {
                ji /= nums[l];
                ++l;
            }
            ret += r - l + 1;
            printf("%d %d %d\n", r, l, ret);
        }
        return ret;
    }
};



int main()
{
    Solution s = Solution();
    // int n = 8;
    int ret = s.numSubarrayProductLessThanK(6, 5);
    cout << ":" << ret << endl;
    return 1;
}
