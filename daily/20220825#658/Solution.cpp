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
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0;
        int r = 1;
        int n = arr.size();
        while (l < n)
        {
            if (r == n)
            {
                break;
            }
            int diff1 = abs(arr[l] - x);
            int diff2 = abs(arr[r] - x);
            if (diff1 < diff2)
            {
                break;
            }
            else
            {
                ++l;
                ++r;
            }
        }
        while (l > 0 && abs(arr[l] - x) == abs(arr[l - 1] - x))
        {
            --l;
            --r;
        }
        while (r - l < k)
        {
            if (r == n)
            {
                --l;
            }
            else if (l == 0)
            {
                ++r;
            }
            else
            {
                if (abs(arr[r] - x) < abs(arr[l - 1] - x))
                {
                    ++r;
                }
                else
                {
                    --l;
                }
            }
        }
        return vector<int>(arr.begin() + l, arr.begin() + r);
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

