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
    Solution(vector<int>& nums) {
        for (int i = 0;i < nums.size();++i)
        {
            int t = nums[i];
            if (data.count(t))
            {
                data[t].push_back(i);
            }
            else
            {
                data[t] = { i };
            }
            
        }
    }

    int pick(int target) {
        vector<int> ret = data[target];
        return ret[rand() % ret.size()];
    }
    unordered_map<int, vector<int>> data;
};



int main()
{
    // Solution s = Solution();
    // int n = 8;
    // int ret = s.binaryGap(n);
    // cout << ":" << ret << endl;
    return 1;
}
