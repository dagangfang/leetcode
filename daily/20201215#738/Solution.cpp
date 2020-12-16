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
        string strN = to_string(N);
        int i = 1;
        while (i < strN.length() && strN[i - 1] <= strN[i])
        {
            i += 1;
        }
        printf("i:%d\n", i);
        if (i < strN.length())
        {
            while (i > 0 && strN[i - 1] > strN[i])
            {
                strN[i - 1] -= 1;
                i -= 1;
            }
            for (i += 1; i < strN.length(); ++i)
            {
                strN[i] = '9';
            }
        }
        return stoi(strN);
    }
};

// 8 9 9 0 9 9

// 399   5 8 2 7 4 2 9 7 9
// 3 4 4

int main()
{
    Solution s = Solution();
    int r = s.monotoneIncreasingDigits(11440);
    printf("结果：%d \n", r);
    return 1;
}
