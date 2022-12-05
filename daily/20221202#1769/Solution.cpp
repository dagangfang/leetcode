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
    vector<int> minOperations(string boxes) {
        int l = 0;
        int ln = 0;
        int r = 0;
        int rn = 0;
        int n = boxes.size();
        for (int i = 1;i < n;++i)
        {
            if (boxes[i] == '1')
            {
                r += i;
                ++rn;
            }
        }
        printf("%d %d\n", r, rn);
        vector<int> ret(n, 0);
        ret[0] = r;
        for (int i = 1;i < n;++i)
        {
            r -= rn;
            if (boxes[i] == '1')
            {
                --rn;
            }
            if (boxes[i - 1] == '1')
            {
                ++ln;
            }
            l += ln;
            ret[i] = l + r;
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

