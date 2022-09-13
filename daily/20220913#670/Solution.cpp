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
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size();
        int l = 0;
        while (l < n)
        {
            while (s[l] >= '9')
            {
                ++l;
                if (l >= n - 1)
                {
                    return num;
                }
            }
            int r = n - 1;
            char maxC = s[l];
            int maxIndex = -1;
            while (r > l)
            {
                if (s[r] > maxC)
                {
                    maxC = s[r];
                    maxIndex = r;
                }
                --r;
            }
            if (maxIndex == -1)
            {
                ++l;
            }
            else
            {
                s[maxIndex] = s[l];
                s[l] = maxC;
                return atoi(s.c_str());
            }
        }
        return num;
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

