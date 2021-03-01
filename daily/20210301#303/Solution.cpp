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

using namespace std;

class NumArray
{
public:
    NumArray(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return;
        sums = vector<int>(n);
        sums[0] = nums[0];
        for (int i = 1; i < n; ++i)
        {
            sums[i] = nums[i] + sums[i - 1];
        }
    }

    int sumRange(int i, int j)
    {
        return i > 0 ? sums[j] - sums[i - 1] : sums[j];
    }

private:
    vector<int> sums;
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

int main()
{
    // Solution s = Solution();

    return 1;
}
