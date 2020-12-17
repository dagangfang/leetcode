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
    int maxProfit(vector<int> &prices, int fee)
    {
        int n = prices.size();
        // if (n = 1)
        //     return 0;
        int l = prices[0];
        int r;
        int sum = 0;
        bool inBuy = false;
        for (int i = 1; i < n; ++i)
        {
            if (inBuy)
            {
                if (prices[i] > r)
                {
                    r = prices[i];
                }
                else if (r - prices[i] > fee)
                {
                    sum += r - l - fee;
                                        printf("卖出：%d %d %d %d\n", i, l, r, sum);

                    inBuy = false;
                    l = prices[i];
                }
            }
            else
            {
                if (prices[i] < l)
                {
                    l = prices[i];
                }
                else if (prices[i] - l > fee)
                {
                    inBuy = true;
                    r = prices[i];
                    printf("购买起点：%d %d %d %d\n", i, l, r, sum);
                }
            }
        }
        if (inBuy)
        {
            sum += r - l - fee;
            printf("最后卖出：%d %d %d %d\n", n, l, r, sum);
        }
        return sum;
    }
};

// 8 9 9 0 9 9

// 399   5 8 2 7 4 2 9 7 9
// 3 4 4

int main()
{
    Solution s = Solution();
    // bool r = s.wordPattern("aaa", "aa aa aa aa");
    // int r = s.monotoneIncreasingDigits(11023);
    vector<int> in = vector<int>{1, 3, 2, 8, 4, 9};
    printf("结果：%d \n", s.maxProfit(in, 2));
    return 1;
}
