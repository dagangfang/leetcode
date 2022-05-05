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

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> arr(n, 0);
        int len = n;
        int t = 0;
        int i = 0;
        while (n > 1)
        {
            if (arr[i] == 0)
            {
                ++t;
                if (t == k)
                {
                    arr[i] = 1;
                    t = 0;
                    --n;
                    printf(" %d %d\n", i, n);
                }
            }
            ++i;
            if (i == len)
            {
                i = 0;
            }
        }
        for (i = 0;i < len;++i)
        {
            if (arr[i] == 0)
            {
                return i + 1;
            }
        }
        return 0;
    }
};



int main()
{
    Solution s = Solution();
    // int n = 8;
    int ret = s.findTheWinner(6, 5);
    cout << ":" << ret << endl;
    return 1;
}
