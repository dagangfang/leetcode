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

using namespace std;


class Solution {
public:
    void findMinHeightTrees(list<int> longList, vector<vector<int>>& edges) {
        list<int> curList = {};
        int i = 0;
        while (i < edges.size())
        {
            if (edges[i].size() > 2)
            {
                cout << "continue:" << i << " " << edges[i][0] << " " << edges[i][1] << " " << edges[i][2] << " " << endl;
                ++i;
                continue;
            }
            int l = edges[i][0];
            int r = edges[i][1];
            if (curList.size() == 0)
            {
                curList.push_back(l);
                curList.push_back(r);
                edges[i].push_back(1);
                cout << "start:" << i << endl;
                ++i;
                continue;
            }
            if (curList.front() == l)
            {
                curList.push_front(r);
                edges[i].push_back(1);
                cout << "push1:" << i << endl;
            }
            else if (curList.back() == l)
            {
                curList.push_back(r);
                edges[i].push_back(1);
                cout << "push2:" << i << endl;
            }
            else if (curList.front() == r)
            {
                curList.push_front(l);
                edges[i].push_back(1);
                cout << "push3:" << i << endl;
            }
            else if (curList.back() == r)
            {
                curList.push_back(l);
                edges[i].push_back(1);
                cout << "push4:" << i << endl;
            }
            else
            {
                cout << "no push:" << i << endl;

            }
            if (i == edges.size() - 1)
            {
                cout << "find:" << curList.size() << endl;
                if (curList.size() > longList.size())
                {
                    longList.assign(curList.begin(), curList.end());
                }
                curList.clear();
                i = 0;
                continue;
            }
            else
            {
                ++i;
            }
        }
        int length = longList.size();
        if (length % 2 == 1)
        {
            return vector<int>{longList[]};
        }

    }


};

int main()
{
    Solution s = Solution();
    vector<vector<int>> vec = { };
    vec.push_back(vector<int>{ 3, 0 });
    vec.push_back(vector<int>{ 3, 1 });
    vec.push_back(vector<int>{ 3, 2 });
    vec.push_back(vector<int>{ 3, 4 });
    vec.push_back(vector<int>{ 5, 4 });
    // [[3, 0],[3, 1],[3, 2],[3, 4],[5, 4]]

    list<int> longList;
    s.findMinHeightTrees(longList, vec);
    // cout << "Solution:" << endl;
    for (auto a : longList)
    {
        cout << a << endl;
    }
    return 1;
}
