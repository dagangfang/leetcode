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
    vector<int> findNumOfValidWords(vector<string> &words, vector<string> &puzzles)
    {
        int n = words.size();
        vector<unordered_map<char, int>> v_worlds = vector<unordered_map<char, int>>(n);
        for (int i = 0; i < n; ++i)
        {
            unordered_map<char, int> map = unordered_map<char, int>();
            for (auto &c : words[i])
            {
                map[c] = 1;
            }
            v_worlds[i] = map;
        }
        vector<int> ret = vector<int>();
        for (int i = 0; i < puzzles.size(); ++i)
        {
            unordered_map<char, int> map = unordered_map<char, int>();
            for (auto &c : puzzles[i])
            {
                map[c] = 1;
            }
            int num = 0;
            for (int j = 0; j < n; ++j)
            {
                if (!v_worlds[j].count(puzzles[i][0]))
                    continue;
                int flag = false;
                for (auto &k : v_worlds[j])
                {
                    if (!map.count(k.first))
                    {
                        flag = true;
                        continue;
                    }
                }
                if (!flag)
                    ++num;
            }
            ret.push_back(num);
        }
        return ret;
    }
};

int main()
{
    // Solution s = Solution();

    return 1;
}
