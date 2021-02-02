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
    int characterReplacement(string s, int k)
    {
        unordered_map<char, vector<int>> map = unordered_map<char, vector<int>>();
        unordered_map<char, int> map2 = unordered_map<char, int>();
        int size = s.size();
        char c = ' ';
        int n = 1;
        for (int i = 0; i < size; ++i)
        {
            if (c != s[i])
            {
                if (n != 0)
                {
                    if (!map.count(c))
                    {
                        map[c] = vector<int>{i - n, n};
                        map2[c] = n;
                    }
                    else
                    {
                        if (n > map2[c])
                            map2[c] = n;
                        auto end = map[c].end();
                        int l = *(end - 2);
                        int r = i;
                        int t = k - i - n - (*(end - 1) + l);
                        if (t >= 0)
                        {
                            int t = k;
                        }
                        map[c].push_back(i - n);
                        map[c].push_back(n);
                    }

                    n = 1;
                }
                c = s[i];
            }
            else
            {
                ++n;
            }
        }
        if (!map.count(c))
        {
            map[c] = vector<int>();
        }
        map[c].push_back(size - n);
        map[c].push_back(n);

        return 1;
    }
};

int main()
{
    // Solution s = Solution();
    string s = "\\/";
    cout << s << " " << s.size() << endl;

    return 1;
}
