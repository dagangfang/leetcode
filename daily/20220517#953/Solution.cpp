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

    bool isAlienSorted(vector<string>& words, string order) {
        int n = words.size();
        if (n == 1) return true;
        vector<int> index(26);
        for (int i = 0; i < order.size(); i++) {
            index[order[i] - 'a'] = i;
        }
        int l = 0;
        int r = 1;
        int i = 0;
        while (true)
        {
            int comp = index[words[r][i] - 'a'] - index[words[l][i] - 'a'];
            if (comp > 0)
            {
                ++l;
                ++r;
                if (r == n)
                    return true;
            }
            else if (comp < 0)
            {
                return false;
            }
            else
            {
                ++i;
                if (words[l].size() == i)
                {
                    if (words[r].size() >= i)
                    {
                        ++l;
                        ++r;
                        if (r == n)
                            return true;
                        i = 0;
                    }
                }
                else if (words[r].size() == i)
                {
                    return false;
                }
            }

        }
        return true;
    }
};


int main()
{
    Solution s = Solution();
    // vector<string> strs = { "cba","daf","ghi" };
    // int ret = s.oneEditAway("teacher", "beacher");
    // cout << ":" << ret << endl;

    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
