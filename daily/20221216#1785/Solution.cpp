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
    int minElements(vector<int>& nums, int limit, int goal) {
        long sum = 0;
        for (int i : nums)
        {
            sum += i;
        }
        long diff = abs(goal - sum);
        return diff == 0 ? 0 : (diff - 1) / limit + 1;
    }
};




int main()
{
    // Solution s = Solution();

}

