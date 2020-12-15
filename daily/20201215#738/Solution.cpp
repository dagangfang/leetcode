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
    int monotoneIncreasingDigits(int N)
    {
        string in = to_string(999);
        int site[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
        int i, result = 0, index = 0;
        while (N >= 10)
        {
            i = N % 10;
            if (site[i] < 0)
                site[i] = index;
            N /= 10;
            ++index;
        }
        printf("长度 %d \n", index);
        for (int i = 0; i < 10; ++i)
        {
            printf("site %d \n", site[i]);
        }
        for (int i = 0; i < N; ++i)
        {
            if (site[i] >= 0)
            {
                result = N * pow(10, index) - 1;
                printf("情况1 %d \n", result);
                return result;
            }
        }
        result += N * pow(10, index);
        int last = index;
        for (int i = N; i < 10; ++i)
        {
            if (site[i] >= 0 && last > site[i])
            {

                int s = 0, r = last - site[i];
                printf("开始:%d %d %d ", result, i, r);
                while (r > 0)
                {
                    s = s * 10 + i;
                    --r;
                }
                result += s * pow(10, site[i]);
                printf("情况2 %d %d %d %d\n", result, s, i, site[i]);
                last = site[i];
            }
        }
        return result;
    }
};

// 8 9 9 0 9 9

// 399   5 8 2 7 4 2 9 7 9
// 3 4 4

int main()
{
    Solution s = Solution();
    int r = s.monotoneIncreasingDigits(120);
    printf("结果：%d \n", r);
    return 1;
}
