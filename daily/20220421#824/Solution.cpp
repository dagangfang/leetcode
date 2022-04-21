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
    string toGoatLatin(string sentence) {
        string ret;
        bool isTop = true;
        char topChar = 0;
        int aNum = 1;
        sentence += ' ';
        for (int i = 0;i < sentence.size(); ++i)
        {
            char c = sentence[i];
            if (c == ' ')
            {
                if (topChar != 0)
                {
                    ret += topChar;
                    topChar = 0;
                }
                ret += "ma";
                for (int j = 0;j < aNum;++j)
                {
                    ret += 'a';
                }
                if (i != sentence.size() - 1)
                {
                    ++aNum;
                    isTop = true;
                    ret += c;
                }
            }
            else
            {
                if (isTop)
                {
                    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                    {
                        ret += c;
                    }
                    else
                    {
                        topChar = c;
                    }
                    isTop = false;
                }
                else
                {
                    ret += c;
                }
            }
        }
        return ret;
    }
};


int main()
{
    Solution s = Solution();
    string str = "I speak Goat Latin";
    string ret = s.toGoatLatin(str);
    cout << ":" << ret << endl;
    return 1;
}
