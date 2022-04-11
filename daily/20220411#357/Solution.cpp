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
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 10;
        }
        int ans = 10, cur = 9;
        for (int i = 0; i < n - 1; ++i) {
            cur *= 9 - i;
            ans += cur;
        }
        return ans;
    }
};


int main()
{
    Solution s = Solution();
    vector<string> s1 = { "gin", "zen", "gig", "msg" };
    int b = s.uniqueMorseRepresentations(s1);
    cout << "Solution:" << b << endl;
    // for (auto a : ret)
    // {
    //     cout << "ret:" << a << endl;
    // }
    return 1;
}
