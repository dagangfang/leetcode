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
#include <numeric>

using namespace std;

class Solution {
public:
    string reformat(string s) {
        int n = s.size();
        string ret(s);
        int num1 = 0;
        int num2 = 1;
        char topC = ' ';
        for (int i = 0;i < n;++i)
        {
            if ('0' <= s[i] && s[i] <= '9')
            {
                if (num1 >= n) return "";
                ret[num1] = s[i];
                num1 += 2;
            }
            else
            {
                if (num2 > n)
                {
                    return "";
                }
                else if (num2 == n)
                {
                    topC = s[i];
                    num2 += 2;
                }
                else
                {
                    ret[num2] = s[i];
                    num2 += 2;
                }

            }
        }
        if (topC != ' ')
        {
            ret.pop_back();
            ret = topC + ret;
        }
        return ret;
    }
};


int main()
{
    // Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}
