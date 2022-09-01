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
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ret(n, -1);
        ret[n - 1] = prices[n - 1];
        for (int i = 0;i < n;++i)
        {
            if (ret[i] == -1)
            {
                for (int j = i + 1;j < n;++j)
                {
                    // printf("A %d %d\n", i, j);
                    for (int k = i;k < j;++k)
                    {
                        // printf("B %d %d %d\n", i, j, k);
                        if (ret[k] == -1 && prices[j] <= prices[k])
                        {
                            // printf("C\n");
                            ret[k] = prices[k] - prices[j];
                        }
                    }
                }
                if (ret[i] == -1)
                    ret[i] = prices[i];
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

