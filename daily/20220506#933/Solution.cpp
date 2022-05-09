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


class RecentCounter {
public:
    RecentCounter() {
    }

    int ping(int t) {
        qu.push(t);
        while (t - 3000 > qu.front())
            qu.pop();
        return qu.size();
    }
    queue<int> qu;
};



int main()
{
    // Solution s = Solution();
    // // int n = 8;
    // int ret = s.numSubarrayProductLessThanK(6, 5);
    // cout << ":" << ret << endl;
    return 1;
}
