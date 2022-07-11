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
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        int max_count = 0;
        for (int i = 0;i < n;++i)
        {
            for (int j = i + 1;j < n;++j)
            {
                int i1 = arr[i];
                int i2 = arr[j];
                int sum = i1 + i2;
                int count = 0;
                for (int k = j + 1;k < n;++k)
                {
                    if (arr[k] > sum)
                    {
                        break;
                    }
                    if (arr[k] == sum)
                    {
                        i1 = i2;
                        i2 = arr[k];
                        sum = i1 + i2;
                        if (count == 0)
                        {
                            count = 3;
                        }
                        else
                        {
                            ++count;
                        }
                        continue;
                    }
                }
                if (count > max_count)
                {
                    max_count = count;
                }
            }
        }
        return max_count;
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
