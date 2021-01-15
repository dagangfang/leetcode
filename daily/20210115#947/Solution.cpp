#include <iostream>
#include <vector>
#include <unordered_map>
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
    int removeStones(vector<vector<int>> &stones)
    {
        unordered_map<int, int> xm = unordered_map<int, int>();
        unordered_map<int, int> ym = unordered_map<int, int>();
        int n = stones.size();
        int ret = 0;
        int x, y;
        for (int i = 0; i < n; ++i)
        {
            x = stones[i][0];
            y = stones[i][1];
            if (xm.count(x))
            {
                if (ym.count(y))
                {
                    int xt = xm[x];
                    int yt = ym[y];
                    if (xt != yt)
                    {
                        printf("-1:%d %d %d %d %d %d\n", i, x, y, xm[x], ym[y], yt);
                        for (auto &a : xm)
                        {
                            if (a.second == xt)
                                a.second = yt;
                        }

                        for (auto &a : ym)
                        {
                            if (a.second == xt)
                                a.second = yt;
                        }
                        --ret;
                    }
                    else
                    {
                        printf("0:%d %d %d %d\n", i, x, y, yt);
                    }
                }
                else
                {
                    ym[y] = xm[x];
                }
            }
            else
            {
                if (ym.count(y))
                {
                    xm[x] = ym[y];
                }
                else
                {
                    xm[x] = i;
                    ym[y] = i;
                    ++ret;
                    printf("1:%d %d %d %d\n", i, x, y, i);
                }
            }
        }

        return n - ret;
    }
};

int main()
{
    Solution s = Solution();
    string a = "hello!";
    a[1] = 'h';
    printf("%s \n", a.c_str());
    return 1;
}
