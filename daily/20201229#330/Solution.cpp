#include <iostream>
#include <vector>
#include <unordered_map>
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
    int minPatches(vector<int> &nums, int n)
    {
        //         int x = (n+1)/2;
        //         2x-1
        //         2x-1 = n
        //         n = 11 6
        //         n = 10 5
        //         n = 9 5
        //         n = 8 4
        // 1 1
        // 3 1 2
        // 7 1 2 4
        // 15 1 2 4 8
        // 31 1 2 4 8 16
        // a[i] = a[i-1]*2+1
        // 2^x-1
        //         x = 5
        //         x = 6

        int sum = 0;
        int x = 0;
        while (pow(2, x + 1) - 1 < n)
            ++x;
        printf("x: %d %d \n", x, n);
        unordered_map<int, int> m_nums = unordered_map<int, int>();
        for (auto a : nums)
            m_nums[a] = 1;
        for (int i = 1; i <= x; ++i)
        {
            int index = pow(2, i - 1);
            printf("判读:%d %d %d\n", i, index, m_nums[index]);
            if (m_nums[index] != 1)
                ++sum;
        }
        for (int i = pow(2, x - 1) + 1; i <= n; ++i)
        {
            printf("判读2:%d %f \n", i, i * (double)(i + 1) / 2);
            if (m_nums[i] == 1 && i * (double)(i + 1) / 2 >= n)
            {
                break;
            }
            else
            {
                ++sum;
                break;
            }
        }
        return sum;
    }
};

// class Solution {
// public:
//     int minPatches(vector<int>& nums, int n) {
//         int patches = 0;
//         long long x = 1;
//         int length = nums.size(), index = 0;
//         while (x <= n) {
//             if (index < length && nums[index] <= x) {
//                 x += nums[index];
//                 index++;
//             } else {
//                 x <<= 1;
//                 patches++;
//             }
//         }
//         return patches;
//     }
// };

int main()
{
    Solution s = Solution();
    vector<int> in = vector<int>{1, 5, 10};
    printf("结果：%d \n", s.minPatches(in, 20));
    // return 1;
}
