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
    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs)
    {
        int n = pairs.size();
        if (n == 0)
            return s;
        map<int, int> map1 = map<int, int>();
        unordered_map<int, vector<char>> map2 = unordered_map<int, vector<char>>();
        int l, r;
        for (int i = 0; i < n; ++i)
        {
            l = pairs[i][0];
            r = pairs[i][1];
            printf("%d %d \n", l, r);
            if (map1.count(l))
            {
                if (map1.count(r))
                {
                    printf("#3#%d %d \n", map1[r], map1[l]);
                    if (map1[l] != map1[r])
                    {
                        printf("##%d %d \n", map1[r], map1[l]);
                        int tr = map1[r];
                        for (auto &a : map1)
                        {
                            printf("%d %d %d %d %d %d \n", a.first, a.second, r,map1[r],l, map1[l]);
                            if (a.second == tr)
                            {
                                printf("#\n");
                                a.second = map1[l];
                            }
                        }
                    }
                }
                else
                {
                    printf("#2#%d %d \n", map1[r], map1[l]);
                    map1[r] = map1[l];
                }
            }
            else
            {
                if (map1.count(r))
                {
                    printf("#1#%d %d \n", map1[r], map1[l]);
                    map1[l] = map1[r];
                }
                else
                {
                    printf("#0#%d %d \n", map1[r], map1[l]);
                    map1[l] = l;
                    map1[r] = l;
                }
            }
        }

        for (auto &a : map1)
        {
            printf("%d:%d \n", a.first, a.second);
        }
        for (auto &a : map1)
        {
            if (map2.count(a.second))
            {
                map2[a.second].push_back(s[a.first]);
            }
            else
            {
                map2[a.second] = vector<char>{s[a.first]};
            }
        }
        for (auto &a : map2)
        {
            sort(a.second.begin(), a.second.end());
        }

        for (auto &a2 : map2)
        {
            int i = 0;
            for (auto &a1 : map1)
            {
                if (a2.first == a1.second)
                {
                    s[a1.first] = map2[a2.first][i];
                    ++i;
                }
            }
        }
        printf("%s \n", s.c_str());
        return s;
    }
};

int main()
{
    Solution s = Solution();
    string a = "hello!";
    a[1] = 'h';
    printf("%s \n", a.c_str());
    return 1;
}
