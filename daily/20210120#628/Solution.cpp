#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <deque>
#include <limits.h>
#include <string.h>

using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i1 = nums[n - 2] * nums[n - 3];
        int i2 = nums[0] * nums[1];
        if (nums[n - 1] > 0)
            return i1 > i2 ? i1 * nums[n - 1] : i2 * nums[n - 1];
        else
            return i2 > i1 ? i1 * nums[n - 1] : i2 * nums[n - 1];
    }
};

int main()
{
    Solution s = Solution();
    string a = "hello!";
    string b = "hello!";

    printf("结果：%d \n", a == b);
    return 1;
}
