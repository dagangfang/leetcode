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
    bool areNumbersAscending(string s) {
        int last = 0;
        int t = 0;
        int i = 0;
        int n = s.size();
        while (i <= n)
        {
            if (i == n || s[i] < '0' || s[i] > '9')
            {
                if (t > 0)
                {
                    if (t <= last)
                    {
                        return false;
                    }
                    last = t;
                    // printf("last %d %d\n",i,t);
                }
                t = 0;
                if (i == n)
                    break;
            }
            else
            {
                t = t * 10 + (s[i] - '0');
            }
            ++i;
        }
        return true;
    }
};




int main()
{
    // Solution s = Solution();

}

