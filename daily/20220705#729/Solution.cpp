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




class MyCalendar {
public:
    map<int, int> m;
    MyCalendar() {

    }

    bool book(int start, int end) {
        if (m.size() == 0)
        {
            m[start] = end;
            return true;
        }
        auto bt = m.begin();
        if (end <= bt->first)
        {
            m[start] = end;
            return true;
        }
        auto rbt = m.rbegin();
        if (start >= rbt->second)
        {
            m[start] = end;
            return true;
        }
        for (auto it = bt, next = ++bt;next != m.end();++it, ++next)
        {
            if (it->second <= start && end <= (next)->first)
            {
                m[start] = end;
                return true;
            }
        }
        return false;
    }
};




int main()
{
    // Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}
