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
    bool func(string& l, string& r)
    {
        int ln = l.size();
        int rn = r.size();
        int d = 0;
        for (int i = 0;i < rn;++i)
        {
            while (l[i + d] != r[i])
            {
                ++d;
                if (d > ln - rn)
                {
                    return false;
                }
            }
        }
        return true;
    }
    int findLUSlength(vector<string>& strs) {
        int len = strs.size();
        int maxRet = -1;
        for (int i = 0;i < len;++i)
        {
            bool is = true;
            for (int j = 0;j < len;++j)
            {
                if (i == j)
                {
                    continue;
                }
                if (strs[i].size() <= strs[j].size())
                {
                    if (func(strs[j], strs[i]))
                    {
                        is = false;
                        break;
                    }
                }
                // printf("%d %d \n", i, j);

            }
            if (is)
            {
                printf("%d max\n", i);
                maxRet = max(maxRet, int(strs[i].size()));
            }
        }
        return maxRet;
    }
};
int main()
{
    Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}
