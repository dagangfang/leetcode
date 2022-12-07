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
    int numDifferentIntegers(string s) {
        int ret = 0;
        unordered_map<string, int> m;
        int n = s.size();
        string tmp = "";
        bool isNewStart = true;
        for (int i = 0;i < n;++i)
        {
            int it = i;
            while (i <= n - 1 && s[i] >= '0' && s[i] <= '9')
            {
                if (isNewStart && s[i] == '0')
                {
                }
                else
                {
                    tmp += s[i];
                    isNewStart = false;
                }
                ++i;
            }
            if (it != i)
            {
                isNewStart = true;
                if (tmp.size() == 0)
                {
                    tmp = '0';
                }
                if (m[tmp] != 1)
                {
                    m[tmp] = 1;
                    ++ret;
                }
                tmp = "";
            }

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

