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
    vector<vector<int>> largeGroupPositions(string s)
    {
        int size = s.size();
        int n = 0;
        int start = 0;
        char c = ' ';
        vector<vector<int>> ret = vector<vector<int>>();
        for (int i = 0; i < size; ++i)
        {
            if (c == s[i])
            {
                ++n;
            }
            else
            {
                if (n >= 3)
                {
                    ret.push_back(vector<int>{start, start + n - 1});
                }
                start = i;
                n = 1;
                c = s[i];
            }
        }
        if (n >= 3)
        {
            ret.push_back(vector<int>{start, start + n - 1});
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    // vector<int> in = vector<int>{2, 7, 4, 1, 8, 1};
    // printf("结果：%d \n", s.fib(7));
    return 1;
}
