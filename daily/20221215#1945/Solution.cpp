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
    int getLucky(string s, int k) {
        int ret = 0;
        for (auto c : s)
        {
            int t = c - 'a' + 1;
            while (t > 0)
            {
                ret += t % 10;
                t /= 10;
            }
        }
        while (k > 1)
        {
            int t = 0;
            while (ret > 0)
            {
                t += ret % 10;
                ret /= 10;
            }
            --k;
            ret = t;
        }
        return ret;
    }
};



int main()
{
    // Solution s = Solution();

}

