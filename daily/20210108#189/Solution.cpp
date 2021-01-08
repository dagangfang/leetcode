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
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 1 || k % n == 0)
            return;
        if (k >= n)
            k %= n;
        int l = n, r = k;
        while (l % r != 0)
        {
            int t = r;
            r = l % r;
            l = t;
        }
        int batch = r;
        int start, i, t, t2;
        for (int b = 0; b < batch; ++b)
        {
            start = i = b;
            t = nums[i];
            while (1)
            {
                if (i + k >= n)
                    i -= n;
                t2 = nums[i + k];
                nums[i + k] = t;
                i += k;
                t = t2;
                if (i == start)
                {
                    break;
                }
            }
        }
        return;
    }
};

int main()
{
    Solution s = Solution();
    // vector<int> in = vector<int>{2, 7, 4, 1, 8, 1};
    // printf("结果：%d \n", s.fib(7));
    unordered_map<int, int> m = unordered_map<int, int>();
    cout << m[1] << endl;
    m[2] = 0;
    cout << m[2] << endl;
    printf("%d %d\n", m[1], m[2]);
    return 1;
}
