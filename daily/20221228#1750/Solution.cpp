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
    int minimumLength(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                break;
            }
            while (s[l + 1] == s[r])
            {
                if (l + 1 == r) return 0;
                ++l;
            }
            while (s[l] == s[r - 1])
            {
                if (l == r - 1) return 0;
                --r;
            }
            ++l;
            --r;
        }
        return r - l + 1;
    }
};



int main()
{
    // Solution s = Solution();

}

