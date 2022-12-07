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
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1 > n2 * 6 || n1 * 6 < n2)
            return -1;
        int num1 = 0;
        int num2 = 0;
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for (auto i : nums1)
        {
            num1 += i;
            m1[i]++;
        }
        for (auto i : nums2)
        {
            num2 += i;
            m2[i]++;
        }
        if (num1 == num2)
            return 0;
        int ret = 0;
        int diff = num1 - num2;
        // printf("diff %d\n", diff);
        bool f = diff > 0 ? true : false;
        diff = abs(diff);
        for (int i = 5;i >= 1;--i)
        {
            int iNum = f ? m1[i + 1] + m2[6 - i] : m2[i + 1] + m1[6 - i];
            // printf("iNum %d  %d\n", iNum, i);
            for (int j = 0;j < iNum;++j)
            {
                diff -= i;
                // printf("- %d\n", diff);
                ++ret;
                if (diff <= 0)
                {
                    return ret;
                }
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

