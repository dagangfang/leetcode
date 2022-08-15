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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ret;
        unordered_map<int, int> m;
        for (int i = 0;i < groupSizes.size(); ++i)
        {
            int t = groupSizes[i];
            if (t == 1)
            {
                ret.emplace_back(vector<int>{i});
            }
            else
            {
                if (m.count(t) == 1 && m[t] >= 0)
                {
                    ret[m[t]].emplace_back(i);
                    if (ret[m[t]].size() == t)
                    {
                        m[t] = -1;
                    }
                }
                else
                {
                    ret.emplace_back(vector<int>{i});
                    m[t] = ret.size() - 1;
                }
            }
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

