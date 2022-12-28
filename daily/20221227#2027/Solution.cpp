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
    int minimumMoves(string s) {
        int n = s.size();
        int i = 0;
        int ret = 0;
        while (i < n)
        {
            if (s[i] == 'X')
            {
                i += 3;
                ++ret;
            }
            else
            {
                ++i;
            }
        }
        return ret;
    }
};



int main()
{
    // Solution s = Solution();

}

