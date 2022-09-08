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
    vector<int> constructArray(int n, int k) {
        vector<int> ret(n);
        for (int i = 0;i <= k;++i)
        {
            if (i % 2 == 0)
            {
                ret[i] = i / 2 + 1;
            }
            else
            {
                ret[i] = k + 1 - i / 2;
            }
        }
        for (int i = k + 1;i < n;++i)
        {
            ret[i] = i + 1;
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

