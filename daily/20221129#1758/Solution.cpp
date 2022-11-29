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
    int minOperations(string s) {
        int n = s.size();
        int i1 = 0;
        int i2 = 0;
        bool f = true;
        for (int i = 0;i < n;++i)
        {
            if (s[i] == '0')
            {
                if (f)
                {
                    ++i1;
                }
                else
                {
                    ++i2;
                }
            }
            else
            {
                if (f)
                {
                    ++i2;
                }
                else
                {
                    ++i1;
                }
            }
            f = !f;
        }
        return i1 < i2 ? i1 : i2;
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

