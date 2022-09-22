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
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int num = arr.size();
        for (auto& a1 : pieces)
        {
            bool isFind = false;
            for (int i = 0;i < arr.size();++i)
            {
                if (arr[i] == a1[0])
                {
                    isFind = true;
                    int n = a1.size();
                    num -= n;
                    if (n > 0)
                    {
                        for (int j = 1;j < n;++j)
                        {
                            if (arr[i + j] != a1[j])
                                return false;
                        }
                    }
                    break;
                }
            }
            if (!isFind)
                return false;
        }
        if (num == 0)
            return false;
        return true;
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

