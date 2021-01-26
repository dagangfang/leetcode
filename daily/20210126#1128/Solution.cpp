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
    int numEquivDominoPairs(vector<vector<int>> &dominoes)
    {
        sort(dominoes.begin(), dominoes.end(), [](auto &a, auto &b) {
            return min(a[0], a[1]) == min(b[0], b[1]) ? (a[0] + a[1] < b[0] + b[1]) : (min(a[0], a[1]) < min(b[0], b[1]));
        });
        int n = dominoes.size();
        int ret = 0;
        int a1 = dominoes[0][0];
        int a2 = dominoes[0][1];
        int b1, b2;
        if (a1 > a2)
            swap(a1, a2);
        int contin_n = 0;
        for (int i = 1; i < n; ++i)
        {
            b1 = dominoes[i][0];
            b2 = dominoes[i][1];
            if (b1 > b2)
                swap(b1, b2);
            printf("%d %d %d %d %d\n", i, a1, a2, b1, b2);
            if (a1 == b1 && a2 == b2)
            {
                ++contin_n;
            }
            else
            {
                ret += contin_n * (contin_n + 1) / 2;
                contin_n = 0;
                a1 = b1;
                a2 = b2;
            }
        }
        ret += contin_n * (contin_n + 1) / 2;
        return ret;
    }
};

int main()
{
    // Solution s = Solution();
    string s = "\\/";
    cout << s << " " << s.size() << endl;

    return 1;
}
