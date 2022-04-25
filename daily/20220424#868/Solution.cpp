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
    int binaryGap(int n) {
        int max = 0;
        int t = 0;
        bool b = false;
        while (true)
        {
            int y = n % 2;
            if (y == 1)
            {
                if (b)
                {
                    ++t;
                    if (t > max)
                    {
                        max = t;
                    }
                    t = 0;
                }
                else
                {
                    b = true;
                }
            }
            else
            {
                if (b)
                {
                    ++t;
                }
            }
            if (n == 1)
            {
                break;
            }
            n /= 2;
        }
        return max;
    }
};


int main()
{
    Solution s = Solution();
    int n = 8;
    int ret = s.binaryGap(n);
    cout << ":" << ret << endl;
    return 1;
}
