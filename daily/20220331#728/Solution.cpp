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
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        for (int i = left;i <= right;++i)
        {
            int temp = i;
            bool isMatch = true;
            while (temp > 0)
            {
                int temp2 = temp % 10;
                if (temp2 == 0 || i % temp2 != 0)
                {
                    isMatch = false;
                    break;
                }
                else
                {
                    temp /= 10;
                }
            }
            if (isMatch)
            {
                ret.push_back(i);
            }
        }
        return ret;
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
