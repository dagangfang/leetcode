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
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (auto& s : logs)
        {
            if (s == "../")
            {
                --depth;
            }
            else if (s == "./")
            {

            }
            else
            {
                ++depth;
            }
            if (depth < 0)
                depth = 0;
        }
        return depth;
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

