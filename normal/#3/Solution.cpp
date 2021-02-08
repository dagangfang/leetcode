#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> m = unordered_map<char, int>();
        int n = s.size();
        int ret = 0;
        int start = 0, end = 0;
        char c;
        while (end < n)
        {
            c = s[end];
            while (m.count(c) != 0 && m[c] == 1)
            {
                // printf("2:%d %d %c\n",start,end,s[start]);
                m[s[start]] = 0;
                ++start;
            }
            ++end;
            ret = max(ret, end - start);
            m[c] = 1;
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();

    // printN(l2);
    return 1;
}
