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

using namespace std;

class Solution {
public:

    int arrayPrime[] = { 2 ,3 ,5 ,7 ,11 ,13 ,17 ,19 };
    bool isPrime(int val)
    {
        int sum = 0;
        while (val > 0)
        {
            if (val % 2)
            {
                ++sum;
            }
            val /= 2;
        }
        for (int i = 0;i < 8;++i)
        {
            if (arrayPrime[i] == sum)
            {
                return true;
            }
        }
        return false;
    }

    int countPrimeSetBits(int left, int right) {
        int sum = 0;
        for (int i = left;i <= right;++i)
        {
            if (isPrime(i))
            {
                ++sum;
            }
        }
        return sum;
    }
};


int main()
{
    Solution s = Solution();
    vector<int> ret = s.selfDividingNumbers(47, 85);
    cout << "Solution:" << endl;
    for (auto a : ret)
    {
        cout << a << endl;
    }
    return 1;
}
