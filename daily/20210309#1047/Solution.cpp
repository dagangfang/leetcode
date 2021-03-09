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

class Solution
{
public:
    string removeDuplicates(string S)
    {
        int n = S.size();
        stack<char> ret = stack<char>();
        for (auto &c : S)
        {
            if (!ret.empty() && ret.top() == c)
            {
                ret.pop();
            }
            else
            {
                ret.push(c);
            }
        }
        string ret_s = "";
        while (!ret.empty())
        {
            ret_s += ret.top();
            ret.pop();
        }
        reverse(ret_s.begin(), ret_s.end());
        return ret_s;
    }
};

int main()
{
    // Solution s = Solution();

    return 1;
}
