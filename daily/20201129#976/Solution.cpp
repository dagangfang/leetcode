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
    int largestPerimeter(vector<int> &A)
    {
        sort(A.begin(), A.end(), [](const auto &a, const auto &b) { return a > b; });
        for (auto a : A)
        {
            cout << ":" << a << endl;
        }
        int max = 0;
        int len = A.size();
        for (int i = 0; i < len - 2; ++i)
        {
            if (max > 0 && A[i] + A[i] + A[i] < max)
            {
                return max;
            };
            for (int j = i + 1; j < len - 1; ++j)
            {
                if (max > 0 && A[i] + A[j] + A[j] < max)
                {
                    return max;
                }
                for (int k = j + 1; k < len; ++k)
                {
                    if (max > 0 && A[i] + A[j] + A[k] < max)
                    {
                        return max;
                    }
                    if (A[k] > A[i] - A[j])
                    {
                        int sum = A[i] + A[j] + A[k];
                        if (sum > max)
                        {
                            max = sum;
                        }
                    }
                }
            }
        }
        return max;
    }
};

int main()
{
    Solution s = Solution();
    auto in = vector<int>{3, 6, 2, 3};
    // sort(in.begin(), in.end(), [](auto &a, auto &b) { return a > b; });
    // for (auto a : in)
    // {
    //     cout << a << endl;
    // }
    // // in = s.sortString(in);
    cout << "结果：" << s.largestPerimeter(in) << endl;
    // cout << 5 << endl;
    return 1;
}