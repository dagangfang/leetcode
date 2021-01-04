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
    vector<int> v = vector<int>(31, -1);

    int fib2(int n)
    {
        if (v[n] >= 0)
            return v[n];
        v[n] = fib2(n - 1) + fib2(n - 2);
        return v[n];
    }

    int fib(int n)
    {
        v[0] = 0;
        v[1] = 1;
        return fib2(n);
    }
};

int main()
{
    Solution s = Solution();
    // vector<int> in = vector<int>{2, 7, 4, 1, 8, 1};
    printf("结果：%d \n", s.fib(7));
    // return 1;
}
