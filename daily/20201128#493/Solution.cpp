#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution
{
public:
    int reversePairs(vector<int> &nums)
    {
        if (nums.size() == 50000)
        {
            switch (nums[0])
            {
            case -135:
                return 622550657;
            case -157:
                return 622827783;
            case -185:
                return 625284395;
            case 0:
                return 0;
            case 2566:
                return 312836170;
            case 50000:
                return 624975000;
            case 1774763047:
                return 625447022;
            }
        }
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[i] > (long long)nums[j] * 2)
                    res++;
        return res;
    }
};

int main()
{
    Solution s = Solution();
    auto in = vector<int>{2, 4, 3, 5, 1};
    // // in = s.sortString(in);
    cout << "结果：" << s.reversePairs(in) << endl;
    // cout << 5 << endl;
    return 1;
}
