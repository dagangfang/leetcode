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
    int minDeletionSize(vector<string>& strs) {
        int ret = 0;
        int n = strs[0].size();
        for (int i = 0;i < n;++i)
        {
            for (int j = 1;j < strs.size();++j)
            {
                // cout << i << " " << j << endl;
                if (strs[j - 1][i] > strs[j][i])
                {
                    ++ret;
                    break;
                }
            }
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    vector<string> strs = { "cba","daf","ghi" };
    int ret = s.minDeletionSize(strs);
    cout << ":" << ret << endl;

    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
