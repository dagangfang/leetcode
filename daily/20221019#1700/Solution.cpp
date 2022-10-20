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
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int i1 = 0;
        int i2 = 0;
        for (int i = 0;i < n;++i)
        {
            if (students[i] == 0)
                ++i1;
            else
                ++i2;
        }
        for (int i = 0;i < n;++i)
        {
            if (sandwiches[i] == 0)
            {
                if (i1 == 0)
                    break;
                --i1;
            }
            else
            {
                if (i2 == 0)
                    break;
                --i2;
            }
        }
        return i1 + i2;
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

