#include <iostream>
#include <vector>
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
    bool wordPattern(string pattern, string s)
    {
        vector<vector<int>> vp = vector<vector<int>>();
        int pn = pattern.size();
        bool flag;
        for (int i = 0; i < pn; ++i)
        {
            flag = true;
            for (auto &a : vp)
            {
                if (a[0] == pattern[i])
                {
                    a.push_back(i);
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                vp.push_back({pattern[i], i});
            }
        }
        vector<int> vs = vector<int>(1, 0);
        for (int i = 0; i < s.size(); ++i)
            if (s[i] == ' ')
                vs.push_back(i + 1);
        if (vs.size() != pn)
        {
            return false;
        }
        int t, l;
        char c;
        int vpn = vp.size();
        int sn = s.size();
        vector<int> f = vector<int>(vpn, 1);
        for (int i = 0; i < vpn; ++i)
        {
            t = 0;
            l = vs[vp[i][1]];
            while (l + t < sn && s[l + t] != ' ')
            {
                c = s[l + t];
                for (int j = 2; j < vp[i].size(); ++j)
                {
                    if (c != s[vs[vp[i][j]] + t])
                    {
                        return false;
                    }
                }
                for (int k = i + 1; k < vpn; ++k)
                {
                    if (f[k] == 1 && c != s[vs[vp[k][1]] + t])
                    {
                        f[k] = 0;
                    }
                }
                ++t;
            }
            for (int k = i + 1; k < vpn; ++k)
            {
                if (f[k] == 1 && (vs[vp[k][1]] + t >= sn || s[vs[vp[k][1]] + t] == ' '))
                {
                    return false;
                }
                else
                {
                    f[k] == 1;
                }
            }
        }
        return true;
    }
};

// 8 9 9 0 9 9

// 399   5 8 2 7 4 2 9 7 9
// 3 4 4

int main()
{
    Solution s = Solution();
    bool r = s.wordPattern("aaa", "aa aa aa aa");
    // int r = s.monotoneIncreasingDigits(11023);
    printf("结果：%d \n", r);
    return 1;
}
