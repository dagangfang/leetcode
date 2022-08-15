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
    int maxScore(string s) {
        int l = 0;
        int r = 0;
        int max_sum = 0;
        for (int i = 0;i < s.size();++i)
        {
            if (s[i] == '1')
            {
                ++r;
            }
        }
        for (int i = 0;i < s.size() - 1;++i)
        {
            if (s[i] == '1')
            {
                --r;
            }
            else
            {
                ++l;
            }
            max_sum = max(max_sum, l + r);
        }
        return max_sum;
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

