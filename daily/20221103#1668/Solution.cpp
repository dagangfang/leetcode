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
    int maxRepeating(string sequence, string word) {
        int n1 = sequence.size();
        int n2 = word.size();
        int maxlen = 0;
        int len = 0;
        bool flag = true;
        for (int i = 0;i < n1; ++i)
        {
            int j = 0;
            int t = i;
            while (sequence[i] == word[j])
            {
                ++i;
                ++j;
                if (j == n2)
                {
                    if (flag)
                    {
                        len++;
                    }
                    else
                    {
                        len = 1;
                        flag = true;
                    }
                    maxlen = max(maxlen, len);
                    j = 0;
                }
                if (i == n1)
                {
                    return maxlen;
                }
            }
            flag = false;
            i = t;
        }
        return maxlen;
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

