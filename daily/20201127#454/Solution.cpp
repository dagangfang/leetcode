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
    int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D)
    {
        int num = 0;
        map<int, int> count = map<int, int>();
        for (const auto &a : A)
            for (const auto &b : B)
                ++count[a + b];
        for (const auto &c : C)
            for (const auto &d : D)
                num += count[-(c + d)];
        return num;
    }
};

int main()
{
    Solution s = Solution();
    // auto in = vector<int>{3, 6, 9, 1};
    // // in = s.sortString(in);
    // cout << "结果：" << s.maximumGap(in) << endl;
    // cout << 5 << endl;
    return 1;
}
