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
    string reverseOnlyLetters(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            while (s[l] < 'a' && (s[l] < 'A' || s[l] > 'Z'))
            {
                ++l;
                // cout << "l:" << l << " " << s[l] << endl;
                if (l > r) return s;
            }
            while (s[r] < 'a' && (s[r] < 'A' || s[r] > 'Z'))
            {
                --r;
                // cout << "r:" << r << " " << s[r] << endl;
                if (l > r) return s;
            }
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            ++l;
            --r;
            // cout << "change" << endl;
        }
        // cout << "ret:" << s << " " << l << " " << r << endl;
        return s;
    }
};


int main()
{
    Solution s = Solution();
    string str = "Test1ng-Leet=code-Q!";
    str[0] = 'A';
    string ret = s.reverseOnlyLetters(str);
    cout << "Solution:" << ret << endl;
    return 1;
}
