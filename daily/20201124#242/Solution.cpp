#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};
int main()
{
    Solution s = Solution();
    string in = "htisuxzuegzjbienyasrxpgllzlprkdzunvdzbwzwkuqlfvtdjsrcqoctysirtjamej";
    string s1 = "asd";
    string t1 = "sad";
    // in = s.sortString(in);
    cout << "结果：" << s.isAnagram(s1, t1) << endl;
    return 1;
}
