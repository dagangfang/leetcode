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
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int num = 1;
        int wid = 0;
        for (auto& a : s)
        {
            int w = widths[a - 'a'];
            if (wid + w > 100)
            {
                ++num;
                wid = w;
            }
            else
            {
                wid += w;
            }
        }
        return vector<int>{num, wid};
    }
};
int main()
{
    Solution s = Solution();
    vector<string> s1 = { "gin", "zen", "gig", "msg" };
    // int b = s.uniqueMorseRepresentations(s1);
    // cout << "Solution:" << b << endl;
    // for (auto a : ret)
    // {
    //     cout << "ret:" << a << endl;
    // }
    return 1;
}
