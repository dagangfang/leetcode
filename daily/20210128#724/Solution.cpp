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
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
        }
        int left = 0;
        for (int i = 0; i < n; ++i)
        {
            if (left == sum - nums[i] - left)
            {
                return i;
            }
            else
            {
                left += nums[i];
            }
        }
        return -1;
    }
};

int main()
{
    // Solution s = Solution();
    string s = "\\/";
    cout << s << " " << s.size() << endl;

    return 1;
}
