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
#include <numeric>

using namespace std;




class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        for (int i = 0;i < n;++i)
        {
            int t = nums[i];
            if (m.count(t) > 0)
                m[t]++;
            else
                m[t] = 1;
        }
        vector<int> ret;
        while (m.size() > 0)
        {
            auto minIt = m.begin();
            for (auto it = m.begin();it != m.end();++it)
            {
                if (it->second <= minIt->second)
                {
                    minIt = it;
                }
            }
            for (int i = 0;i < minIt->second;++i)
            {
                ret.emplace_back(minIt->first);
            }
            m.erase(minIt);
        }
        return ret;
    }
};


int main()
{
    // Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}

