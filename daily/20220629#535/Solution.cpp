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
    unordered_map<int, string> mId;
    unordered_map<string, int> mStr;
    int n = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if (mStr.count(longUrl) > 0)
        {
            return to_string(mStr[longUrl]);
        }
        else
        {
            ++n;
            mId[n] = longUrl;
            mStr[longUrl] = n;
            return to_string(n);
        }
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mId[atoi(shortUrl.c_str())];
    }
};



int main()
{
    Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}
