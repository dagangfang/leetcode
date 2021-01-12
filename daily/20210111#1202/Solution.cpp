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
        unordered_map<int, vector<int>> map2 = unordered_map<int, vector<int>>();
        unordered_map<int, int> map3 = unordered_map<int, int>();

        int l, r;
        for (int i = 0; i < n; ++i)
        {
            l = pairs[i][0];
            r = pairs[i][1];
            if (map1.count(l))
            {
                if (map1.count(r))
                {
                    if (map1[l] != map1[r])
                    {
                        int min, max;
                        if (map3[map1[l]] > map3[map1[r]])
                        {
                            min = map1[r];
                            max = map1[l];
                        }
                        else
                        {
                            min = map1[l];
                            max = map1[r];
                        }
                        for (auto &a : map1)
                        {
                            if (a.second == min)
                            {
                                a.second = max;
                            }
                        }
                        map3[max] += map3[min];
                        map3.erase(min);
                        // map3[min] = 0;
                    }
                }
                else
                {
                    map1[r] = map1[l];
                    ++map3[l];
                }
            }
            else
            {
                if (map1.count(r))
                {
                    map1[l] = map1[r];
                    ++map3[l];
                }
                else
                {
                    map1[l] = l;
                    map1[r] = l;
                    map3[l] = 2;
                }
            }
        }
        for (auto &a : map1)
        {
            if (map2.count(a.second) == 0)
            {
                map2[a.second] = vector<int>(27,0);
            }
            map2[a.second][s[a.first] - 97] = map2[a.second][s[a.first] - 97] + 1;
            // printf("%d %d %c %d %d\n",a.first,a.second,s[a.first],s[a.first] - 97,map2[a.second][s[a.first] - 97]);
        }
        for (auto &a2 : map2)
        {
            int index = 0;
            for (int i = 0; i < 27; ++i)
            {
                for (int j = 0; j < a2.second[i]; ++j)
                {
                    while(map1.count(index) == 0 || map1[index] != a2.first)
                        ++index;
                    // printf("赋值 %d %d %d %c %d\n",index,a2.first,i,i + 97,a2.second[i]);
                    s[index] = (char)(i + 97);
                    ++index;
                    
                }
            }
        }
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
