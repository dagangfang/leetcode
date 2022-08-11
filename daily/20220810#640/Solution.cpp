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
#include<numeric>

using namespace std;

class Solution {
public:
    string solveEquation(string equation) {
        equation += '=';
        int xNum = 0;
        int rightNum = 0;
        string tmpStr;
        bool isLeft = true;
        bool isPositive = true;
        for (int i = 0;i < equation.size();++i)
        {
            char c = equation[i];
            if (c == 'x')
            {
                int tmp = 1;
                if (tmpStr.size() > 0)
                {
                    tmp = atoi(tmpStr.c_str());
                }
                if (!isLeft)
                {
                    tmp *= -1;
                }
                if (!isPositive)
                {
                    tmp *= -1;
                    isPositive = true;
                }
                xNum += tmp;
                printf("x %d %d %d\n", i, tmp, xNum);
                tmpStr = "";
            }
            else if (c == '=')
            {
                if (tmpStr.size() > 0)
                {
                    int tmp = atoi(tmpStr.c_str());
                    if (isLeft)
                    {
                        tmp *= -1;
                    }
                    if (!isPositive)
                    {
                        tmp *= -1;
                        isPositive = true;
                    }
                    rightNum += tmp;
                    printf("= %d %d %d\n", i, tmp, rightNum);
                    tmpStr = "";
                }
                isLeft = false;
            }
            else if (c == '-')
            {
                if (tmpStr.size() > 0)
                {
                    int tmp = atoi(tmpStr.c_str());
                    if (isLeft)
                    {
                        tmp *= -1;
                    }
                    if (!isPositive)
                    {
                        tmp *= -1;
                        isPositive = true;
                    }
                    rightNum += tmp;
                    printf("- %d %d %d\n", i, tmp, rightNum);
                    tmpStr = "";
                }
                isPositive = false;
            }
            else if (c == '+')
            {
                if (tmpStr.size() > 0)
                {
                    int tmp = atoi(tmpStr.c_str());
                    if (isLeft)
                    {
                        tmp *= -1;
                    }
                    if (!isPositive)
                    {
                        tmp *= -1;
                        isPositive = true;
                    }
                    rightNum += tmp;
                    printf("+ %d %d %d\n", i, tmp, rightNum);
                    tmpStr = "";
                }
            }
            else
            {
                tmpStr += c;
            }
        }
        if (xNum == 0)
            return rightNum == 0 ? "Infinite solutions" : "No solution";
        string ret = "x=" + to_string(rightNum / xNum);
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
