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
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {
        sort(orders.begin(), orders.end(), [](vector<int>& a, vector<int>& b) {
            if (a[2] != b[2])
                            return a[2] < b[2];

            else
            {
                if (a[2] == 0)
                    return a[0] > b[0];
                else
                    return a[0] < b[0];
            }
            });
    }
};



int main()
{
    // Solution s = Solution();

}

