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
    bool oneEditAway(string first, string second) {
        int l1 = 0;
        int l2 = 0;
        int r1 = first.size();
        int r2 = second.size();
        if (r1 - r2 > 1 || r2 - r1 > 1) return false;
        // printf("%d %d %d %d\n", l1, l2, r1, r2);
        while (l1 < r1 && l2 < r2 && first[l1] == second[l2])
        {
            ++l1;
            ++l2;
        }
        // printf("%d %d %d %d\n", l1, l2, r1, r2);
        if (l1 == r1 || l2 == r2)
        {
            return true;
        }
        if (r1 > r2)
        {
            ++l1;
        }
        else if (r2 > r1)
        {
            ++l2;
        }
        else
        {
            ++l1;
            ++l2;
        }
        // printf("%d %d %d %d\n", l1, l2, r1, r2);
        while (l1 < r1 && l2 < r2 && first[l1] == second[l2])
        {
            ++l1;
            ++l2;
        }
        if (l1 == r1 || l2 == r2)
        {
            return true;
        }
        // printf("%d %d %d %d\n", l1, l2, r1, r2);
        return false;
    }
};


int main()
{
    Solution s = Solution();
    // vector<string> strs = { "cba","daf","ghi" };
    int ret = s.oneEditAway("teacher", "beacher");
    cout << ":" << ret << endl;

    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
