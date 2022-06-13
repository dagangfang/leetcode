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
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ret;
        int n = pattern.size();
        for (size_t i = 0; i < words.size(); i++)
        {
            string& s = words[i];
            if (s.size() != n) continue;
            int map[26] = { 0 };
            int map1[26] = { 0 };
            bool ok = true;
            for (size_t j = 0; j < n; j++)
            {
                char a = pattern[j] - 'a';
                if (map[a] > 0)
                {
                    if (map[a] != s[j])
                    {
                        ok = false;
                        break;
                    }

                }
                else
                {
                    if (map1[s[j] - 'a'] > 0)
                    {
                        ok = false;
                        break;
                    }
                    else
                    {
                        map[a] = s[j];
                        map1[s[j] - 'a'] = pattern[j];
                    }
                }

            }
            if (ok)
            {
                ret.push_back(s);
            }
        }
        return ret;
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
