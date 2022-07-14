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
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ret;
        int n = asteroids.size();
        for (int i = 0;i < n;++i)
        {
            int t = asteroids[i];
            if (t == 0)
            {
                continue;
            }
            if (t > 0)
            {
                for (int j = i + 1;j < n;++j)
                {
                    int t2 = asteroids[j];
                    if (t2 == 0)
                    {
                        continue;
                    }
                    if (t2 < 0)
                    {
                        for (int k = j - 1;k >= 0;--k)
                        {
                            int t3 = asteroids[k];
                            if (t3 == 0)
                            {
                                continue;
                            }
                            if (t3 > 0)
                            {
                                if (-t2 > t3)
                                {
                                    asteroids[k] = 0;
                                }
                                if (-t2 < t3)
                                {
                                    asteroids[j] = 0;
                                    break;
                                }
                                if (-t2 == t3)
                                {
                                    asteroids[j] = 0;
                                    asteroids[k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                if (asteroids[i] > 0)
                {
                    ret.emplace_back(t);
                }
            }
            else if (t < 0)
            {
                ret.emplace_back(t);
            }
        }
        return ret;
    }
};





int main()
{
    // Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}
