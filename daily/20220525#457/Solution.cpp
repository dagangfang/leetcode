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
    int findSubstringInWraproundString(string p) {
        int nums[26] = { 0 };
        int ret = 0;
        int n = p.size();
        int l = 0;
        for (int i = 0;i < n;++i)
        {
            int t = i;
            while (t == i || (t < n && (p[t] - p[t - 1] == 1 || p[t] - p[t - 1] == -25)))
            {
                ++t;
            }
            printf("while %d %d\n", i, t);
            for (;i < t;++i)
            {
                int step = p[i] - 'a';
                int sub = t - i;
                if (nums[step] < sub)
                {
                    nums[step] = sub;
                }
            }
            --i;
        }
        for (int i = 0;i < 26;++i)
        {
            ret += nums[i];
            printf("%d %d %d\n", i, nums[i], ret);
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    //{3,4},{2,3},{1,2}
    //{1,4},{2,3},{1,2}
    // vector<vector<int>> nums = { {3,4},{2,3},{1,2} };
    int ret = s.findSubstringInWraproundString("cac");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << "ret:" << ret[i] << endl;
    // }
    cout << "ret:" << ret << endl;
    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
