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
    int findShortestSubArray(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, vector<int>> map = unordered_map<int, vector<int>>();
        int t;
        int max_n = 0;
        int min_n = 0;
        for (int i = 0; i < n; ++i)
        {
            t = nums[i];
            if (map.count(t) > 0)
            {
                ++map[t][0];
                map[t][2] = i;
                if (map[t][0] == max_n)
                {
                    min_n = min(min_n, map[t][2] - map[t][1] + 1);
                }
                else if (map[t][0] > max_n)
                {
                    max_n = map[t][0];
                    min_n = map[t][2] - map[t][1] + 1;
                }
            }
            else
            {
                map[t] = vector<int>{1, i, i};
                if (1 > max_n)
                {
                    max_n = 1;
                    min_n = 1;
                }
            }
        }
        return min_n;
    }
};

int main()
{
    // Solution s = Solution();

    return 1;
}
