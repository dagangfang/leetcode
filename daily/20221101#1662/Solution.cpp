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
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i1 = 0;
        int j1 = 0;
        int i2 = 0;
        int j2 = 0;
        while (true)
        {
            string& s1 = word1[i1];
            string& s2 = word2[i2];
            bool isOver1 = false;
            bool isOver2 = false;
            if (s1[j1] == s2[j2])
            {
                if (j1 < s1.size() - 1)
                {
                    ++j1;
                }
                else
                {
                    if (i1 < word1.size() - 1)
                    {
                        ++i1;
                        j1 = 0;
                    }
                    else
                    {
                        isOver1 = true;
                        //结束1
                    }
                }
                if (j2 < s2.size() - 1)
                {
                    ++j2;
                }
                else
                {
                    if (i2 < word2.size() - 1)
                    {
                        ++i2;
                        j2 = 0;
                    }
                    else
                    {
                        //结束2
                        isOver2 = true;
                    }
                }
            }
            else
            {
                return false;
            }
            if (!isOver1 && !isOver2)
                continue;
            if (isOver1 && isOver2)
                return true;
            else
                return false;
        }
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

