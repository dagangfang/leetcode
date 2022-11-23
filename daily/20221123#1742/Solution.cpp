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
    int countBalls(int lowLimit, int highLimit) {
        string s = to_string(lowLimit);
        string s2 = to_string(highLimit);

        int ret = 0;
        for (auto c : s)
        {
            ret += c - '0';
        }
        return ret;
    }
};
19
258
253
244
235
226
217
208
190
181
182

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

