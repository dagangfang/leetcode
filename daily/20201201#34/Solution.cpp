#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return vector<int>{-1, -1};
        int l = 0;
        int r = nums.size() - 1;
        if (target < nums[l] || target > nums[r])
            return vector<int>{-1, -1};
        int m = (r + l) / 2;
        int left = -1, right = -1;
        while (1)
        {
            if (target > nums[m])
            {
                if (l == r)
                    break;
                l = m + 1;
                m = (r + l) / 2;
            }
            else if (target < nums[m])
            {
                if (l == r)
                    break;
                r = m - 1;
                m = (r + l) / 2;
            }
            else
            {
                left = right = m;
                while (left - 1 >= 0 && nums[left - 1] == target)
                    --left;
                while (right + 1 <= nums.size() - 1 && nums[right + 1] == target)
                    ++right;
                break;
            }
        }
        return vector<int>{left, right};
    }
};
int main()
{
    Solution s = Solution();
    vector<int> in = vector<int>{1, 4};
    vector<int> result = s.searchRange(in, 4);
    cout << result[0] << result[1] << endl;

    return 1;
}
