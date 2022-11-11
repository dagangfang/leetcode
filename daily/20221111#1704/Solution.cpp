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
    char yuanyin[10] = { 'a','e','i','o','u','A','E','I','O','U' };
    bool check(char& c)
    {
        for (int i = 0;i < 10;++i)
        {
            if (yuanyin[i] == c)
            {
                return true;
            }
        }
        return false;
    }

    bool halvesAreAlike(string s) {
        int l = 0;
        int r = s.size() - 1;
        int num = 0;
        while (l <= r)
        {
            if (check(s[l]))
                ++num;
            if (check(s[r]))
                --num;
            ++l;
            --r;
        }
        return num == 0;
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

