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
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for (auto& account : accounts)
        {
            int temp = 0;
            for (auto& num : account)
            {
                temp += num;
            }
            if (temp > max)
            {
                max = temp;
            }

        }
        return max;
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
