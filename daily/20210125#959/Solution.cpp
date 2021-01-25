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
    int regionsBySlashes(vector<string> &grid)
    {
        int n = 1;
        char a = '/';
        char b = '\\';
        int center_p = 0;
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                if (j + i == 1)
                {
                    if (grid[i][j] == b)
                    {
                        ++n;
                    }
                    else if (grid[i][j] == a)
                    {
                        ++center_p;
                    }
                }
                else
                {
                    if (grid[i][j] == a)
                    {
                        ++n;
                    }
                    else if (grid[i][j] == b)
                    {
                        ++center_p;
                    }
                }
            }
        }
        if (center_p > 1)
            n += center_p - 1;
        return n;
    }
};

int main()
{
    // Solution s = Solution();
    string s = "\\/";
    cout << s << " " << s.size() << endl;

    return 1;
}
