#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <deque>
#include <limits.h>
#include <string.h>

using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &A, int K)
    {
        int n = A.size();
        vector<int> kv = vector<int>();
        while (K != 0)
        {
            kv.push_back(K % 10);
            K /= 10;
        }
        reverse(kv.begin(), kv.end());
        int m = kv.size();
        vector<int> &ret = n >= m ? A : kv;
        int carry = 0;
        int k = ret.size() - 1;
        for (int i = n - 1, j = m - 1; i >= 0 && j >= 0; --i, --j, --k)
        {
            int sum = A[i] + kv[j] + carry;
            if (sum >= 10)
            {
                sum -= 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            ret[k] = sum;
        }
        if (carry > 0)
        {
            --k;
            bool find = false;
            for (; k >= 0; --k)
            {
                if (ret[k] != 9)
                {
                    find = true;
                    ret[k] += 1;
                    break;
                }
                else
                {
                    ret[k] = 0;
                }
            }
            if (!find)
            {
                ret.insert(ret.begin(), 1);
            }
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    string a = "hello!";
    string b = "hello!";
    vector<int> v = vector<int>{1, 2, 3, 4};
    v.insert(v.begin(), 0);
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    reverse(v.begin(), v.end());

    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("结果：%d %d \n", 3 % 10, 3 / 10);
    return 1;
}
