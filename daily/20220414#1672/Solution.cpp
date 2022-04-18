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


// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger {
public:
    // Constructor initializes an empty nested list.
    NestedInteger();
    // Constructor initializes a single integer.
    NestedInteger(int value);
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;
    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;
    // Set this NestedInteger to hold a single integer.
    void setInteger(int value);
    // Set this NestedInteger to hold a nested list and adds a nested integer to it.
    void add(const NestedInteger& ni);
    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger>& getList() const;
};

// s = "[123,[456,[789]]]"
// s = "[[123,1],[456,[789]]]]"
class Solution {
public:
    NestedInteger deserialize(string s) {
        NestedInteger nested;
        int l = 0;
        int r = s.size();
        if (s[l] == '[')
        {
            nested = NestedInteger();
            ++l;
            int i = 0;
            while (l + i < r)
            {
                if (s[l + i] == '[')
                {
                    NestedInteger nested1 = NestedInteger();
                    // 再进去一层
                    func()
                }
                else if (s[l + i] == ',')
                {
                    int i = atoi(s.substr(l, i).c_str());
                    auto t = NestedInteger(i);
                    nested.add(t);
                    l += i + 1;
                }
                else if (s[l + i] == ']')
                {
                    //跳出当前
                    break; 
                }
                else
                {
                    ++i;

                }
            }
        }
        else
        {
            return NestedInteger(atoi(s.c_str()));
        }

    }
};


int main()
{
    Solution s = Solution();
    vector<string> s1 = { "gin", "zen", "gig", "msg" };
    // int b = s.uniqueMorseRepresentations(s1);
    // cout << "Solution:" << b << endl;
    // for (auto a : ret)
    // {
    //     cout << "ret:" << a << endl;
    // }
    return 1;
}
