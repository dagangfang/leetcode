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
    int equalSubstring(string s, string t, int maxCost)
    {
        int n = s.size();
        int cost = 0, ret = 0;
        int start = 0, end = 0;
        while (end < n)
        {
            cost += abs((int)(s[end] - t[end]));
            while (cost > maxCost)
            {
                cost -= abs((int)(s[start] - t[start]));
                ++start;
            }
            ++end;
            ret = max(ret, end - start);
        }
        return ret;
    }
};

int main()
{
    // Solution s = Solution();
    string s = "\\/";
    cout << s << " " << s.size() << endl;

    return 1;
}
