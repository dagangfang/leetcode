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
    int findClosest(vector<string>& words, string word1, string word2) {
        bool b1 = false;
        bool b2 = false;
        if (map.count(word1) == 0)
        {
            b1 = true;
            map[word1] = vector<int>();
        }
        if (map.count(word2) == 0)
        {
            b2 = true;
            map[word2] = vector<int>();
        }
        if (b1 || b2)
        {
            for (int i = 0;i < words.size();++i)
            {
                string& s = words[i];
                // printf("0 %s,%d\n", s.c_str(), i);
                if (b1 && s == word1)
                {
                    map[word1].push_back(i);
                    printf("1 %s,%d\n", s.c_str(), i);
                }
                if (b2 && s == word2)
                {
                    map[word2].push_back(i);
                    // printf("2 %s,%d\n", s.c_str(), i);
                }
            }
        }
        int min_ret = 100000;
        for (int i = 0;i < map[word1].size();++i)
        {
            for (int j = 0;j < map[word2].size();++j)
            {
                // printf("C %d,%d\n", map[word1][i], map[word2][j]);
                min_ret = min(min_ret, abs(map[word1][i] - map[word2][j]));
            }
        }
        return min_ret;
    }
    unordered_map<string, vector<int>> map;
};
int main()
{
    Solution s = Solution();
    //{3,4},{2,3},{1,2}
    //{1,4},{2,3},{1,2}
    // vector<vector<int>> nums = { {3,4},{2,3},{1,2} };
    // int ret = s.findSubstringInWraproundString("cac");
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
