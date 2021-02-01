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

using namespace std;

class Solution
{
public:
    vector<int> fairCandySwap(vector<int> &A, vector<int> &B)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (auto &a : A)
            sum1 += a;
        for (auto &b : B)
            sum2 += b;
        int sub = sum1 - sum2;
        for (auto &a : A)
        {
            for (auto &b : B)
            {
                if ((a - b) * 2 == sub)
                    return vector<int>{a, b};
            }
        }
        return vector<int>{0, 0};
    }
};

int main()
{
    // Solution s = Solution();
    string s = "\\/";
    cout << s << " " << s.size() << endl;

    return 1;
}
