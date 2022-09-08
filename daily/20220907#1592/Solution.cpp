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
    string reorderSpaces(string text) {
        vector<string> vs;
        int num = 0;
        int n = text.size();
        int start = -1;
        int sn = 0;
        for (int i = 0;i < n + 1;++i)
        {
            if (i == n || text[i] == ' ')
            {
                if (i != n)
                    ++num;
                if (sn > 0)
                {
                    vs.emplace_back(string(text, start + 1, sn));
                }
                sn = 0;
                start = i;
            }
            else
            {
                ++sn;
            }
        }
        if (vs.size() == 1)
        {
            return vs[0] + string(num, ' ');
        }
        int n1 = num / (vs.size() - 1);
        int n2 = num % (vs.size() - 1);
        // printf("%d %d %d",n1,n2,num);
        string ret;
        int i = 0;
        for (;i < vs.size() - 1;++i)
        {
            ret += vs[i] + string(n1, ' ');
        }
        ret += vs[i] + string(n2, ' ');
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

