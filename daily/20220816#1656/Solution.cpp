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
#include <numeric>

using namespace std;


class OrderedStream {
public:
    vector<string> v;
    int start;
    OrderedStream(int n) {
        v = vector<string>(n);
        start = 0;
    }

    vector<string> insert(int idKey, string value) {
        vector<string> ret;
        v[idKey - 1] = value;
        for (int i = start;i < v.size();++i)
        {
            if (v[i].size() > 0)
            {
                ret.emplace_back(v[i]);
                ++start;
            }
            else
            {
                break;
            }
        }
        return ret;
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

