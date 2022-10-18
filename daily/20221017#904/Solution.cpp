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
#include <numeric>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if (n <= 2)
            return n;
        int l = fruits[0];
        int r = fruits[1];
        int maxRet = 2;
        int tmpMax = 2;
        for (int i = 2;i < n;++i)
        {
            if (fruits[i] == r || fruits[i] == l)
            {
                ++tmpMax;
                maxRet = max(maxRet, tmpMax);
                // printf("1: %d\n",maxRet);
            }
            else
            {
                if (l == r)
                {
                    r = fruits[i];
                    ++tmpMax;
                    maxRet = max(maxRet, tmpMax);
                    // printf("2: %d\n",maxRet);
                }
                else
                {

                    int j = i - 1;
                    l = fruits[j];
                    r = fruits[i];
                    tmpMax = 2;
                    --j;
                    while (j >= 0 && fruits[j] == l)
                    {
                        --j;
                        ++tmpMax;
                    }
                    maxRet = max(maxRet, tmpMax);
                    // printf("3: %d\n",maxRet);
                }
            }
        }
        return maxRet;
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

