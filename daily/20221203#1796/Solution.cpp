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
    int secondHighest(string s) {
        int max1 = -1;
        int max2 = -1;
        for (auto c : s)
        {
            if (c >= '0' && c <= '9')
            {
                int t = c - '0';
                if (t > max1)
                {
                    max2 = max1;
                    max1 = t;
                }
                else if (t < max1 && t > max2)
                {
                    max2 = t;
                }
            }
        }
        return max2;
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

