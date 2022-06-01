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


// 4 4 4
// 3 3 3 3
// 3 3 3 3 
// 3 3 3 3

class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int n = matchsticks.size();
        int total = 0;
        for (int i = 0;i < n;++i)
        {
            total += matchsticks[i];
        }
        if (total % 4 != 0)
            return false;
        int avg = total / 4;
        sort(matchsticks.begin(), matchsticks.end(), [](int a, int b)->bool { return a > b; });
        int num = 0;
        for (int i = 0;i < n;++i)
        {

        }

    }
};


int main()
{
    Solution s = Solution();
    //{3,4},{2,3},{1,2}
    //{1,4},{2,3},{1,2}
    // vector<vector<int>> nums = { {3,4},{2,3},{1,2} };
    // string ret = s.removeOuterParentheses("(()())(())(()(()))");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << "ret:" << ret[i] << endl;
    // }
    // cout << "ret:" << ret << endl;
    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
