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
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        for (int i = 0;i < s.size(); ++i)
        {
            if (s[i] == goal[0])
            {
                int j = 1;
                for (;i + j < s.size(); ++j)
                {
                    if (s[i + j] != goal[j])
                    {
                        goto notFind;
                    }
                }
                for (int k = 0;k + j < s.size(); ++k)
                {
                    if (s[k] != goal[j + k])
                    {
                        goto notFind;
                    }
                }
                return true;
            }
        notFind: {}
        }
        return false;
    }
};


int main()
{
    Solution s = Solution();
    string s1 = "abcde";
    string goal = "cdeab";
    bool b = s.rotateString(s1, goal);
    cout << "Solution:" << b << endl;
    // for (auto a : ret)
    // {
    //     cout << "ret:" << a << endl;
    // }
    return 1;
}
