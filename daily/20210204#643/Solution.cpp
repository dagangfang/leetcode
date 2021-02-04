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

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> v = vector<int>(n - k);
        for (int i = k; i < n; ++i)
        {
            v[i - k] = nums[i] - nums[i - k];
        }
        int max = 0;
        int max_i = 0;
        int sum = 0;
        for (int i = 0; i < n - k; ++i)
        {
            sum += v[i];
            if (sum > max)
            {
                max = sum;
                max_i = i + 1;
            }
        }
        sum = 0;
        for (int i = 0; i < k; ++i)
        {
            sum += nums[max_i + i];
        }
        return (double)sum / k;
    }
};

int main()
{
    // Solution s = Solution();
    string s = "\\/";
    cout << s << " " << s.size() << endl;

    return 1;
}
