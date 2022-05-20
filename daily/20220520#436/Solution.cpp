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
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> ret(n, -2);
        vector<int> status(n, 1);
        int s = 0;
        while (true)
        {
            if (s == -1)
            {
                for (int i = 0;i < intervals.size();++i)
                {
                    if (ret[i] == -2)
                    {
                        s = i;
                        break;
                    }
                }
            }
            if (s == -1) break;
            int r = intervals[s][1];
            int l = 1000000;
            int index = -1;
            for (int i = 0;i < n;++i)
            {
                int lt = intervals[i][0];
                if (lt >= r && lt < l)
                {
                    printf("FIND %d %d %d %d\n", i, r, lt, l);
                    l = lt;
                    index = i;
                }
            }
            printf("%d %d ", s, index);
            ret[s] = index;
            s = index;
            printf("%d ", s);
            if (s != -1 && ret[s] != -2)
            {
                s = -1;
            }
            printf("%d\n", s);
        }
        return ret;
    }
};



int main()
{
    Solution s = Solution();
    //{3,4},{2,3},{1,2}
    //{1,4},{2,3},{1,2}
    vector<vector<int>> nums = { {3,4},{2,3},{1,2} };
    vector<int> ret = s.findRightInterval(nums);
    for (int i = 0;i < ret.size();++i)
    {
        cout << "ret:" << ret[i] << endl;
    }

    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
