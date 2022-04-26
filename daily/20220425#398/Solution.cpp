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

using namespace std;

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int top = 0;
        int front = 0;
        int side = 0;
        for (int x = 0;x < grid.size();++x)
        {
            int maxY = 0;
            int maxX = 0;
            for (int y = 0;y < grid[x].size();++y)
            {

                int v = grid[x][y];
                if (v != 0) ++top;
                if (maxY < v)
                {
                    maxY = v;
                }
                int v2 = grid[y][x];
                if (maxX < v2)
                {
                    maxX = v2;
                }
                // printf("%d %d %d %d %d\n",x,y,top,maxX,maxY);
            }
            front += maxY;
            side += maxX;
        }
        return top + front + side;
    }
};



int main()
{
    // Solution s = Solution();
    // int n = 8;
    // int ret = s.binaryGap(n);
    // cout << ":" << ret << endl;
    return 1;
}
