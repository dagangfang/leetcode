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
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        vector<int> index;
        for (int i = 0;i < n;++i)
        {
            if (s1[i] != s2[i])
            {
                index.emplace_back(i);
                if (index.size() > 2)
                    return false;
            }
        }
        if (index.size() == 0)
        {
            return true;
        }
        if (index.size() == 2 && s1[index[0]] == s2[index[1]] && s1[index[1]] == s2[index[0]])
        {
            return true;
        }
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

