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
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int start = 0;
        bool moveStart = true;
        map<string, int> wordNums;
        paragraph += ' ';
        for (int i = 0;i < paragraph.size();++i)
        {
            char& c = paragraph[i];
            if (c < 'A' || (c > 'Z' && c < 'a') || c >'z')
            {
                if (moveStart)
                {
                    start = i;
                    continue;
                }
                string str = paragraph.substr(start, i - start);
                moveStart = true;
                transform(str.begin(), str.end(), str.begin(), ::towlower);
                if (wordNums.count(str))
                {
                    wordNums[str]++;
                }
                else
                {
                    wordNums[str] = 1;
                }
            }
            else
            {
                if (moveStart)
                {
                    start = i;
                    moveStart = false;
                }
            }
        }
        int max = 0;
        string maxStr;
        for (auto& a : wordNums)
        {
            if (!count(banned.begin(), banned.end(), a.first))
            {
                if (a.second > max)
                {
                    max = a.second;
                    maxStr = a.first;
                }
            }
        }
        return maxStr;
    }
};

int main()
{
    Solution s = Solution();
    string paragraph = "a, a, a, a, b,b,b,c, c";
    vector<string> banned = { "a" };
    string b = s.mostCommonWord(paragraph, banned);
    cout << "Solution:" << b << endl;

    return 1;
}
