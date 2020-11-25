#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string sortString(string s)
    {
        int n = s.length();
        if (n == 0 or n == 1)
            return s;
        sort(s.begin(), s.end());
        auto start = vector<int>();
        char last = s[0];
        int max = 0;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] != last)
            {
                last = s[i];
                if (max == 0)
                    max = i;
                else if (i - start.back() > max)
                    max = i - start.back();
                start.push_back(i);
            }
        }
        if (max == 0)
            return s;
        if (n - start.back() > max)
        {
            max = n - start.back();
        }
        start.push_back(n);
        string result = "";
        int f = 1;
        int startN = start.size();
        for (int i = 0; i < max; ++i)
        {
            for (int j = 0; j < startN; ++j)
            {
                int k = f ? j : startN - j - 1;
                int curNum = k == 0 ? start[k] - i : start[k] - start[k - 1] - i;
                if (curNum > 0)
                    result += s[start[k] - 1];
            }
            f ^= 1;
        }
        return result;
    }
};

int main()
{
    Solution s = Solution();
    string in = "htisuxzuegzjbienyasrxpgllzlprkdzunvdzbwzwkuqlfvtdjsrcqoctysirtjamej";
    in = s.sortString(in);
    cout << "结果：" << in << endl;
    cout << (1 ^ 1) << endl;
    return 1;
}
