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

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        char exor = 0;
        for (char &c : s + t)
        {
            exor ^= c;
        }
        return exor;
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
