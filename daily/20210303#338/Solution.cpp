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

using namespace std;

class Solution
{
public:
    vector<int> countBits(int num)
    {
        vector<int> result(num + 1);
        result[0] = 0;
        for (int i = 1; i <= num; i++)
        {
            if (i % 2 == 1)
            {
                result[i] = result[i - 1] + 1;
            }
            else
            {
                result[i] = result[i / 2];
            }
        }
        return result;
    }
};

int main()
{
    // Solution s = Solution();

    return 1;
}
