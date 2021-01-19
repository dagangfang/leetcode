#include <iostream>
#include <vector>
#include <unordered_map>
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
    int minCostConnectPoints(vector<vector<int>> &points)
    {
        int n = points.size();
        int sum = 0;
        int x = points[0][0];
        int y = points[0][1];
        points[0].push_back(1);
        int min = 0, mini;
        int t, index;
        for (int i = 1; i < n; ++i)
        {
            min = 0;
            for (int j = 1; j < n && points[i].size() == 2; ++j)
            {
                t = abs(points[j][0] - x) + abs(points[j][0] - y);
                if (min == 0 || t < min)
                {
                    min = t;
                    mini = j;
                }
            }
            x = points[mini][0];
            y = points[mini][1];
            for (int j = 0; j < n && points[i].size() == 3; ++j)
            {
                t = abs(points[j][0] - x) + abs(points[j][0] - y);
                if (t < min)
                {
                    min = t;
                }
            }
            points[mini].push_back(1);
            sum += min;
            printf("最近:%d %d %d %d\n", i, mini, min, sum);
        }
        return sum;
    }
};

int main()
{
    Solution s = Solution();
    string a = "hello!";
    string b = "hello!";

    printf("结果：%d \n", a == b);
    return 1;
}
