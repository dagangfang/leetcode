#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 2)
            return 0;
        sort(nums.begin(), nums.end());
        int max = 0;
        for (int i = 1; i < n; ++i)
        {
            int sub = nums[i] - nums[i - 1];
            if (sub > max)
                max = sub;
        }
        return max;
    }
};
int main()
{
    Solution s = Solution();
    auto in = vector<int>{3, 6, 9, 1};
    // in = s.sortString(in);
    cout << "结果：" << s.maximumGap(in) << endl;
    return 1;
}
