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

using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &A, int K)
    {
        int n = A.size();
        int l = 0, r = 0, t = K;
        int ret = 0;
        while (r < n)
        {
            if (A[r] == 1)
            {
                ++r;
            }
            else if (t > 0)
            {
                ++r;
                --t;
            }
            else
            {
                ret = max(r - l, ret);
                if (A[l] == 0)
                {
                    ++t;
                }
                ++l;
            }
        }
        ret = max(r - l, ret);
        return ret;
    }
};

int main()
{
    // Solution s = Solution();

    return 1;
}
