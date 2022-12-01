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
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minIndex = -1;
        int minValue = -1;
        int n = points.size();
        for (int i = 0;i < n;++i)
        {
            if (points[i][0] == x || points[i][1] == y)
            {
                int t = abs(points[i][0] - x) + abs(points[i][1] - y);
                if (minValue == -1 || t < minValue)
                {
                    minValue = t;
                    minIndex = i;
                }

            }
        }
        return minIndex;
    }
};



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

