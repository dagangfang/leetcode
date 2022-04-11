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
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mosichar = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
        unordered_set<string> mosiStr;
        for (auto& word : words)
        {
            string s;
            for (auto& c : word)
            {
                s += mosichar[c - 'a'];
            }
            if (mosiStr.count(s) == 0)
            {
                mosiStr.insert(s);
            }
        }
        return mosiStr.size();
    }
};

int main()
{
    Solution s = Solution();
    vector<string> s1 = { "gin", "zen", "gig", "msg" };
    int b = s.uniqueMorseRepresentations(s1);
    cout << "Solution:" << b << endl;
    // for (auto a : ret)
    // {
    //     cout << "ret:" << a << endl;
    // }
    return 1;
}
