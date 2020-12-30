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
    int lastStoneWeight(vector<int> &stones)
    {
        int n = stones.size();
        if (n == 1)
            return stones[0];
        sort(stones.begin(), stones.end());
        printf_v(stones);
        while (stones[n - 2] != 0)
        {
            stones[n - 1] -= stones[n - 2];
            stones[n - 2] = 0;
            sort(stones.begin(), stones.end());
            printf_v(stones);
        }
        return stones[n - 1];
    }
};

int main()
{
    Solution s = Solution();
    vector<int> in = vector<int>{2, 7, 4, 1, 8, 1};
    printf("结果：%d \n", s.lastStoneWeight(in));
    // return 1;
}
