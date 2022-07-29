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
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int w1 = pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2);
        int w2 = pow(p3[0] - p4[0], 2) + pow(p3[1] - p4[1], 2);
        if (w1 != w2) return false;
        int w3 = pow(p1[0] - p3[0], 2) + pow(p1[1] - p3[1], 2);
        int w4 = pow(p2[0] - p4[0], 2) + pow(p2[1] - p4[1], 2);
        if (w3 != w4) return false;
        if (w1 == w3)
        {
            w3 = pow(p1[0] - p4[0], 2) + pow(p1[1] - p4[1], 2);
            w4 = pow(p2[0] - p3[0], 2) + pow(p2[1] - p3[1], 2);
            if (w3 != w4) return false;
        }
        if (w1 > w3 && w1 == w3 * 2) return true;
        if (w3 > w1 && w3 == w1 * 2) return true;
        return false;
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
