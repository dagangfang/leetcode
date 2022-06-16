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
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int> visited;
        unordered_set<int> res;
        for (int num : nums) {
            if (visited.count(num - k)) {
                res.emplace(num - k);
            }
            if (visited.count(num + k)) {
                res.emplace(num);
            }
            visited.emplace(num);
        }
        return res.size();
    }
};


// class Solution {
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
//         vector<int> ret;
//         int n = mat[0].size();
//         bool f = true;
//         for (int num = 0;num < n;++num)
//         {
//             for (int i = 0;i <= num;++i)
//             {
//                 if (f)
//                 {
//                     ret.push_back(mat[num - i][i]);
//                 }
//                 else
//                 {
//                     ret.push_back(mat[i][num - i]);
//                 }
//             }
//             f != f;
//         }
//         for (int num = n - 2;num >= 0;--num)
//         {
//             for (int i = 0;i <= num;++i)
//             {
//                 if (f)
//                 {
//                     ret.push_back(mat[num - i][i]);
//                 }
//                 else
//                 {
//                     ret.push_back(mat[i][num - i]);
//                 }
//             }
//             f != f;
//         }
//         return ret;
//     }
// };

int main()
{
    Solution s = Solution();
    //{3,4},{2,3},{1,2}
    //{1,4},{2,3},{1,2}
    // vector<vector<int>> nums = { {3,4},{2,3},{1,2} };
    // string ret = s.removeOuterParentheses("(()())(())(()(()))");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << "ret:" << ret[i] << endl;
    // }
    // cout << "ret:" << ret << endl;
    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
