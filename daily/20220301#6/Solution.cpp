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

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() == numRows)
            return s;
        string retArray[numRows];
        for (int i = 0;i < s.size();) {
            for (int j = 0;j < numRows && i < s.size();++j) {
                retArray[j] += s[i];
                ++i;
            }
            for (int j = numRows - 2;j > 0 && i < s.size();--j) {
                retArray[j] += s[i];
                ++i;
            }
        }
        for (int i = 1;i < numRows;++i)
        {
            retArray[0] += retArray[i];
        }
        return retArray[0];

    }
};


int main()
{
    Solution s = Solution();
    string str = "PAYPALISHIRING";
    int numRows = 3;
    string ret = s.convert(str, numRows);
    cout << "Solution:" << ret << endl;
    return 1;
}
