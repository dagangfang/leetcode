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
    vector<int> diStringMatch(string s) {
        vector<int> ret(s.size() + 1, 0);
        int low = -1;
        int max = 1;
        for (int i = 0;i < s.size();++i)
        {
            int t = 0;
            if (s[i] == 'I')
            {
                ret[i + 1] = max++;
            }
            else
            {
                ret[i + 1] = low--;
            }
            // cout << i << " " << t << " " << ret[i] << " " << ret[i + 1] << endl;
        }
        for (int i = 0;i < ret.size();++i)
        {
            ret[i] += -low - 1;
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    // int n = 8;
    vector<int> ret = s.diStringMatch("IDID");
    for (int i = 0;i < ret.size();++i)
    {
        cout << ":" << ret[i] << endl;
    }
    return 1;
}
