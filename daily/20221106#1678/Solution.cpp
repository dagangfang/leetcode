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
    string interpret(string command) {
        string ret;
        int n = command.size();
        bool flag = false;
        for (int i = 0;i < n;++i)
        {
            if (command[i] == '(')
            {
                flag = true;
            }
            else if (command[i] == ')')
            {
                if (flag)
                    ret += 'o';
                flag = false;
            }
            else
            {
                flag = false;
                ret += command[i];
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

