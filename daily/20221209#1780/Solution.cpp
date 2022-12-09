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
    bool re(int n, unordered_map<int, int>& m) {
        if (n == 0) return
            true;
        int i = 0;
        int t = pow(3, i);
        while (t <= n)
        {
            i++;
            t = pow(3, i);
        }
        --i;
        // printf("%d %d %d\n",i,t,n);
        if (m[i] == 0)
        {
            m[i] = 1;
        }
        else
        {
            return false;
        }
        t = pow(3, i);
        return re(n - t, m);
    }
    bool checkPowersOfThree(int n) {
        unordered_map<int, int> m;
        return re(n, m);
    }
};



int main()
{
    // Solution s = Solution();

}

