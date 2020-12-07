#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <deque>
using namespace std;

class Solution
{
public:
    int matrixScore(vector<vector<int>> &A)
    {
        int h = A.size();
        if (h == 0)
            return 0;
        int w = A[0].size();
        if (w == 0)
            return 0;
        for (int y = 0; y < h; ++y)
            if (A[y][0] == 0)
                for (int x = 0; x < w; ++x)
                    A[y][x] ^= 1;
        int sum = h * (1 << (w - 1));
        for (int x = 1; x < w; ++x)
        {
            int num = 0;
            for (int y = 0; y < h; ++y)
                if (A[y][x] == 1)
                    ++num;
            num = max(num, h - num);
            sum += num * (1 << (w - 1 - x));
        }
        return sum;
    }
};

int main()
{
    Solution s = Solution();
    vector<vector<int>> in = vector<vector<int>>{{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};
    cout << s.matrixScore(in) << endl;
    return 1;
}
