#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int length = nums.size();
        if (length == 2 && nums[0] + nums[1] == target)
            return vector<int>{0, 1};
        for (int i = 0; i < length - 1; ++i)
        {
            int sub = target - nums[i];
            int r = length;
            int l = i + 1;

            for (int j = i + 1; j < length; ++j)
            {
                if (sub == nums[j])
                    return vector<int>{i, j};
            }
        }
        return vector<int>{0, 1};
    }
    int digui(vector<int> &nums, int sub, int l, int r)
    {
        if (r == l)
        {
            return -1;
        }
        int mid = (r - l) / 2;
        if (nums[mid] > sub)
        {
            return digui(nums, sub, l, mid);
        }
        else if (nums[mid] < sub)
        {

            return digui(nums, sub, mid, r);
        }
        else
        {
            return mid;
        }
    }
};

int main()
{
    Solution s = Solution();
    vector<int> nums = {3, 2, 4};
    int target = 6;
    auto result = s.twoSum(nums, target);
    cout << "答案: " << result[0] << " " << result[1] << endl;

    cout << 5 / 2 << endl;

    return 1;
}
