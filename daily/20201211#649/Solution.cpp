#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <deque>
#include <limits.h>

using namespace std;

class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        int n = senate.size();
        int i = 0;
        int RM = 0, DM = 0;
        int f = 0;
        while (1)
        {
            if (senate[i] == 'R')
            {
                f |= 1;
                if (DM > 0)
                {
                    --DM;
                    senate[i] = 't';
                }
                else
                    ++RM;
            }
            else if (senate[i] == 'D')
            {
                f |= 2;
                if (RM > 0)
                {
                    --RM;
                    senate[i] = 't';
                }
                else
                    ++DM;
            }
            ++i;
            if (i == n)
            {
                if (f == 1)
                    return "Radiant";
                else if (f == 2)
                    return "Dire";
                else
                {
                    printf("数量 %d %d %s\n", RM, DM, senate.c_str());
                    // DM = RM = 0;
                    i = 0;
                    f = 0;
                }
            }
        }
    }
};

int main()
{
    Solution s = Solution();
    string in = "RD";
    // 0,0,0,5,15
    // 10+5
    printf("结果 %s\n", s.predictPartyVictory(in).c_str());
    return 1;
}
