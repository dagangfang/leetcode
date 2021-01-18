#include <iostream>
#include <vector>
#include <unordered_map>
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
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        int n = accounts.size();
        unordered_map<string, int> um = unordered_map<string, int>();
        unordered_map<int, int> um2 = unordered_map<int, int>();
        for (int i = 0; i < n; ++i)
        {
            int same_index = -1;
            for (int j = 1; j < accounts[i].size(); ++j)
            {
                if (um.count(accounts[i][j]) != 0)
                {
                    int target = um[accounts[i][j]];
                    if (same_index >= 0 && same_index != target)
                    {
                        for (auto &a : um)
                        {
                            if (a.second == target)
                            {
                                a.second = same_index;
                            }
                        }
                        for (auto &a : um2)
                        {
                            if (a.second == target)
                            {
                                a.second = same_index;
                            }
                        }
                    }
                    else
                    {
                        same_index = target;
                    }
                }
            }
            for (int j = 1; j < accounts[i].size(); ++j)
            {
                um[accounts[i][j]] = same_index >= 0 ? same_index : i;
            }
            um2[i] = same_index >= 0 ? same_index : i;
        }
        vector<vector<string>> ret = vector<vector<string>>();
        for (int i = 0; i < n; ++i)
        {
            vector<string> v = vector<string>();
            for (auto &a : um2)
            {
                if (a.second == i)
                {
                    if (v.size() == 0)
                        v.push_back(accounts[i][0]);
                    v.insert(v.end(), accounts[a.first].begin() + 1, accounts[a.first].end());
                }
            }
            if (v.size() > 0)
            {
                if (v.size() > 2)
                {
                    sort(v.begin() + 1, v.end());
                    v.erase(unique(v.begin() + 1, v.end()), v.end());
                }
                ret.push_back(v);
            }
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    string a = "hello!";
    string b = "hello!";

    printf("结果：%d \n", a == b);
    return 1;
}
