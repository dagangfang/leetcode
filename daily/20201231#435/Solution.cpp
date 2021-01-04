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

void printf_v(vector<int> &stones)
{
    printf("v:");
    for (auto a : stones)
    {
        printf("%d ", a);
    }
    printf("\n");
};

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
    }
};

int main()
{
    Solution s = Solution();
    vector<int> in = vector<int>{2, 7, 4, 1, 8, 1};
    // printf("结果：%d \n", s.lastStoneWeight(in));
    // return 1;
}
