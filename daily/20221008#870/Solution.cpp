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
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> ret(n, -1);
        sort(nums1.begin(), nums1.end());
        for (int i = 0;i < n;++i)
        {
            bool flag = true;
            for (int j = 0;j < nums1.size();++j)
            {
                if (nums1[j] > nums2[i])
                {
                    ret[i] = nums1[j];
                    nums1.erase(nums1.begin() + j);
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ret[i] = nums1[0];
                nums1.erase(nums1.begin());
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

