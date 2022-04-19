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
#include <list>
#include <queue>

using namespace std;



class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ret(s.size(), -1);
        for (int i = 0;i < s.size();++i)
        {
            if (s[i] == c)
            {
                ret[i] = 0;
                int l = i - 1;
                int r = i + 1;
                while (l >= 0 && ret[l] != 0)
                {
                    int sub = i - l;
                    if (ret[l] == -1)
                    {
                        ret[l] = sub;
                    }
                    else if (i - l < ret[l])
                    {
                        ret[l] = sub;
                    }
                    else
                    {
                        break;
                    }
                    --l;
                }
                while (r < s.size() && ret[r] != 0)
                {
                    int sub = r - i;
                    if (ret[r] == -1)
                    {
                        ret[r] = sub;
                    }
                    else if (r - i < ret[r])
                    {
                        ret[r] = sub;
                    }
                    else
                    {
                        break;
                    }
                    ++r;
                }
            }
        }
        return ret;
    }
};


int main()
{
    Solution s = Solution();
    string str = "loveleetcode";
    char c = 'e';
    vector<int> ret = s.shortestToChar(str, c);
    for (int i = 0;i < ret.size();++i)
    {
        cout << ":" << ret[i] << endl;
    }

    return 1;
}
