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
    bool lemonadeChange(vector<int> &bills)
    {
        int num5 = 0, num10 = 0;
        for (int i = 0; i < bills.size(); ++i)
        {
            if (5 == bills[i])
                ++num5;
            else if (10 == bills[i])
            {
                if (num5 > 0)
                {
                    --num5;
                    ++num10;
                }
                else
                    return false;
            }
            else if (20 == bills[i])
            {
                if (num10 > 0)
                {
                    if (num5 > 0)
                    {
                        --num5;
                        --num10;
                    }
                    else
                        return false;
                }
                else
                {
                    if (num5 >= 3)
                        num5 -= 3;
                    else
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
    vector<int> in = vector<int>{5, 5, 10, 10, 20};
    // 0,0,0,5,15
    // 10+5
    // cout << s.matrixScore(in) << endl;
    printf("结果 %d\n", s.lemonadeChange(in));
    return 1;
}
