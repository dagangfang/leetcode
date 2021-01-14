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
    vector<bool> prefixesDivBy5(vector<int> &A)
    {
        int v = 0;
        int n = A.size();
        vector<bool> ret = vector<bool>(n);
        for (int i = 0; i < n; ++i)
        {
            v <<= 1;
            v += A[i];
            v %= 5;
            ret[i] = (v == 0) ? true : false;
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    string a = "hello!";
    a[1] = 'h';
    printf("%s \n", a.c_str());
    return 1;
}
