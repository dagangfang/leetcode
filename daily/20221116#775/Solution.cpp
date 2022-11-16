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
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        int n1 = 0;
        int n2 = 0;
        for (int i = 0;i < n - 1;++i)
        {
            int j = i + 1;
            if (nums[i] > nums[j])
            {
                ++n2;
            }
            for (;j < n;++j)
            {
                if (nums[i] > nums[j])
                {
                    ++n1;
                }
            }
        }
        return n1 == n2;
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

