#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <deque>
#include <limits.h>
#include <string.h>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev = 0, curr = 0;
        for (int i = 2; i <= n; i++) {
            int next = min(curr + cost[i - 1], prev + cost[i - 2]);
            prev = curr;
            curr = next;
        }
        return curr;
    }
};


int main()
{
    Solution s = Solution();
    // bool r = s.wordPattern("aaa", "aa aa aa aa");
    // int r = s.monotoneIncreasingDigits(11023);
    vector<int> in = vector<int>{1, 3, 2, 8, 4, 9};
    // printf("结果：%d \n", s.maxProfit(in, 2));
    return 1;
}
