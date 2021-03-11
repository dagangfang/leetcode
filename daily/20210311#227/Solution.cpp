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

using namespace std;

class Solution
{
public:
    void inline_calculate()
    {
        char c = cs.top();
        cs.pop();
        int r = nums.top();
        nums.pop();
        int l = 0;
        if (!nums.empty())
        {
            l = nums.top();
            nums.pop();
        }
        int ret;
        if (c == '+')
            ret = l + r;
        else if (c == '-')
            ret = l - r;
        else if (c == '*')
            ret = l * r;
        else if (c == '/')
            ret = l / r;
        nums.push(ret);
        printf("计算 %d %d %c\n", l, r, c);
    }

    int calculate(string s)
    {

        int n = s.size();
        char c;
        for (int i = 0; i < n; ++i)
        {
            c = s[i];
            printf("遍历%c %d\n", c, cs.empty());
            switch (c)
            {
            case ' ':
                continue;
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                cs.push(c);
                break;
            default:
                int t = 0;
                while (i < n && c >= '0' && c <= '9')
                {
                    t = t * 10 + (int)(c - '0');
                    ++i;
                    c = s[i];
                }
                --i;
                if (!cs.empty() && cs.top() == '-')
                {
                    t = -t;
                    cs.pop();
                    if (!nums.empty())
                        cs.push('+');
                }
                nums.push(t);
                if (!cs.empty() && (cs.top() == '*' || cs.top() == '/'))
                    inline_calculate();
                break;
            }
        }
        while (!cs.empty())
            inline_calculate();
        return nums.top();
    }

private:
    stack<int> nums = stack<int>();
    stack<char> cs = stack<char>();
};

int main()
{
    // Solution s = Solution();
    return 1;
}
