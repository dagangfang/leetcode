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
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = target.size();
        vector<int> v(n, 0);
        for (int i = 0;i < n;++i)
        {
            bool isFind = false;
            for (int j = 0;j < n;++j)
            {
                if (v[j] == 0 && arr[i] == target[j])
                {
                    isFind = true;
                    v[j] = 1;
                    break;
                }
            }
            if (!isFind) return false;
        }
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

