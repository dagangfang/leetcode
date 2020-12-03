#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

class Solution
{
public:
    void checkPrimes(vector<int> &result, int v)
    {
        int end = sqrt(v);
        for (auto &a : result)
            if (a <= end)
            {
                if (v % a == 0)
                    return;
            }
            else
                break;
        result.push_back(v);
    };
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        if (n <= 3)
            return 1;
        if (n <= 5)
            return 2;
        int num = n / 6 + 1;
        vector<int> result = vector<int>{};
        int v;
        for (int i = 1; i <= num; ++i)
        {
            v = i * 6 - 1;
            if (v < n)
            {
                if (i < 6)
                    result.push_back(v);
                else
                    checkPrimes(result, v);
            }
            v = i * 6 + 1;
            if (v < n)
            {
                if (i < 4)
                    result.push_back(v);
                else
                    checkPrimes(result, v);
            }
        }
        return result.size() + 2;
    }
    // void checkPrimes(vector<int> &flag, int v, int &count)
    // {
    //     int end = sqrt(v);
    //     for (int i = 5; i <= end; ++i)
    //     {
    //         if (flag[i])
    //             if (v % i == 0)
    //                 return;
    //     }
    //     flag[v] = 1;
    //     ++count;
    // };

    // int countPrimes(int n)
    // {
    //     if (n <= 2)
    //         return 0;
    //     if (n <= 3)
    //         return 1;
    //     if (n <= 5)
    //         return 2;
    //     int num = n / 6 + 1;
    //     int count = 2;
    //     vector<int> flag = vector<int>(n + 1, 0);
    //     int v;
    //     for (int i = 1; i <= num; ++i)
    //     {
    //         v = i * 6 - 1;
    //         if (v < n)
    //         {
    //             if (i < 6)
    //             {
    //                 flag[v] = 1;
    //                 ++count;
    //             }
    //             else
    //                 checkPrimes(flag, v, count);
    //         }
    //         v = i * 6 + 1;
    //         if (v < n)
    //         {
    //             if (i < 4)
    //             {
    //                 flag[v] = 1;
    //                 ++count;
    //             }
    //             else
    //                 checkPrimes(flag, v, count);
    //         }
    //     }
    //     return count;
    // }
    // int countPrimes(int n)
    // {
    //     vector<bool> isPrime(n + 1, true);
    //     int count = 0;
    //     for (int i = 2; i < n; ++i)
    //     {
    //         if (isPrime[i])
    //         {
    //             ++count;
    //             for (int j = 2; i * j < n; ++j)
    //             {
    //                 isPrime[i * j] = false;
    //             }
    //         }
    //     }
    //     return count;
    // }
    // int countPrimes(int n)
    // {
    //     vector<bool> isPrime(n + 1, true);
    //     int count = 0;
    //     for (int i = 2; i < n; ++i)
    //     {
    //         if (isPrime[i])
    //         {
    //             ++count;
    //             for (int j = 2 * i; j < n; j += i)
    //             {
    //                 isPrime[j] = false;
    //             }
    //         }
    //     }
    //     return count;
    // }
    // bool isPrime(int x)
    // {
    //     for (int i = 2; i * i <= x; ++i)
    //     {
    //         if (x % i == 0)
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // int countPrimes(int n)
    // {
    //     int ans = 0;
    //     for (int i = 2; i < n; ++i)
    //     {
    //         ans += isPrime(i);
    //     }
    //     return ans;
    // }
};
int main()
{
    Solution s = Solution();
    // for (int i = 5; i < 20; ++i)
    // {
    //     cout << i << " " << s.countPrimes(i) << endl;
    // }
    cout << s.countPrimes(499979) << endl;

    return 1;
}
