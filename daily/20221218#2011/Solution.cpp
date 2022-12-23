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
    int finalValueAfterOperations(vector<string>& operations) {
        int ret = 0;
        for (auto& s : operations)
        {
            if (s[1] == '+')
            {
                ++ret;
            }
            else
            {
                --ret;
            }
        }
        return ret;
    }
};




int main()
{
    // Solution s = Solution();

}

