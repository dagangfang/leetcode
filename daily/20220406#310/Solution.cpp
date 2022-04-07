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

// class Solution {
// public:
//     vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
//         if (edges.size() == 0)
//         {
//             return vector<int>{0};
//         }
//         list<int> longList = {};
//         list<int> curList = {};
//         int i = 0;
//         while (i < edges.size())
//         {
//             if (edges[i].size() > 2)
//             {
//                 cout << "continue:" << i << " " << edges[i][0] << " " << edges[i][1] << " " << edges[i][2] << " " << endl;
//                 ++i;
//             }
//             else
//             {
//                 int l = edges[i][0];
//                 int r = edges[i][1];
//                 if (curList.size() == 0)
//                 {
//                     curList.push_back(l);
//                     curList.push_back(r);
//                     edges[i].push_back(1);
//                     cout << "start:" << i << " " << l << " " << r << " " << endl;
//                     continue;
//                 }
//                 if (curList.front() == l)
//                 {
//                     curList.push_front(r);
//                     edges[i].push_back(1);
//                     cout << "push1:" << i << endl;
//                 }
//                 else if (curList.back() == l)
//                 {
//                     curList.push_back(r);
//                     edges[i].push_back(1);
//                     cout << "push2:" << i << endl;
//                 }
//                 else if (curList.front() == r)
//                 {
//                     curList.push_front(l);
//                     edges[i].push_back(1);
//                     cout << "push3:" << i << endl;
//                 }
//                 else if (curList.back() == r)
//                 {
//                     curList.push_back(l);
//                     edges[i].push_back(1);
//                     cout << "push4:" << i << endl;
//                 }
//                 else
//                 {
//                     cout << "no push:" << i << endl;
//                 }
//             }
//             if (i == edges.size() - 1)
//             {
//                 cout << "find:" << curList.size() << endl;
//                 if (curList.size() > longList.size())
//                 {
//                     longList.assign(curList.begin(), curList.end());
//                 }
//                 curList.clear();
//                 i = 0;
//                 continue;
//             }
//             else
//             {
//                 ++i;
//             }
//         }
//         cout << "longList " << longList.front() << " " << longList.back() << endl;
//         for (auto a : longList)
//         {
//             cout << "longList: " << a << endl;
//         }
//         while (longList.size() > 2)
//         {
//             longList.pop_back();
//             longList.pop_front();
//         }
//         if (longList.size() == 1)
//             return vector<int>{longList.front()};
//         else
//             return vector<int>{longList.front(), longList.back()};
//     }
// };

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) {
            return { 0 };
        }
        vector<int> degree(n);
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].emplace_back(edge[1]);
            adj[edge[1]].emplace_back(edge[0]);
            degree[edge[0]]++;
            degree[edge[1]]++;
        }
        queue<int> qu;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (degree[i] == 1) {
                qu.emplace(i);
            }
        }
        int remainNodes = n;
        while (remainNodes > 2) {
            int sz = qu.size();
            remainNodes -= sz;
            for (int i = 0; i < sz; i++) {
                int curr = qu.front();
                qu.pop();
                for (auto& v : adj[curr]) {
                    if (--degree[v] == 1) {
                        qu.emplace(v);
                    }
                }
            }
        }
        while (!qu.empty()) {
            ans.emplace_back(qu.front());
            qu.pop();
        }
        return ans;
    }
};


int main()
{
    Solution s = Solution();
    vector<vector<int>> vec = { };
    vec.push_back(vector<int>{ 0, 1 });
    // vec.push_back(vector<int>{ 3, 1 });
    // vec.push_back(vector<int>{ 3, 2 });
    // vec.push_back(vector<int>{ 3, 4 });
    // vec.push_back(vector<int>{ 5, 4 });
    // [[3, 0],[3, 1],[3, 2],[3, 4],[5, 4]]

    vector<int> ret = s.findMinHeightTrees(1, vec);
    // cout << "Solution:" << endl;
    for (auto a : ret)
    {
        cout << "ret:" << a << endl;
    }
    return 1;
}
