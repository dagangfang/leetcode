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
            for (int j = i + 1; j < length; ++j)
            {
                if (sub == nums[j])
                    return vector<int>{i, j};
            }
        }
        return vector<int>{0, 1};
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
