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
    string customSortString(string order, string s) {
        unordered_map<char, int> m;
        vector<int> index1;
        vector<int> index2;
        string str;
        for (int i = 0;i < order.size();++i)
        {
            m[order[i]] = i;

        }
        for (int i = 0;i < s.size();++i)
        {
            if (m.count(s[i]) == 1)
            {
                index1.emplace_back(i);
                index2.emplace_back(m[s[i]]);
            }
        }
        sort(index2.begin(), index2.end());
        for (int i = 0;i < index1.size();++i)
        {
            s[index1[i]] = order[index2[i]];
        }
        return s;
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

