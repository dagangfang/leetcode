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
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ret = 0;
        int sMap[26] = { 0 };
        for (int i = 0;i < allowed.size();++i)
        {
            sMap[allowed[i] - 'a'] = 1;
        }
        for (int i = 0;i < words.size();++i)
        {
            bool isOk = true;
            for (auto c : words[i])
            {
                if (sMap[c - 'a'] == 0)
                {
                    isOk = false;
                    break;
                }
            }
            if (isOk)
            {
                ret++;
            }
        }
        return ret;
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

