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


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int func(TreeNode* root, unordered_map<int, int>& map, int& max) {
        if (!root) return 0;
        int v = root->val;
        if (root->left)
        {
            v += func(root->left, map, max);
        }
        if (root->right)
        {
            v += func(root->right, map, max);
        }
        if (map.count(v))
        {
            map[v]++;
            if (map[v] > max)
                max = map[v];
        }
        else
        {
            map[v] = 1;
        }
        return v;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int, int> iMap;
        int max = 1;
        vector<int> ret;
        func(root, iMap, max);
        for (auto a : iMap)
        {
            if (a.second == max)
            {
                ret.push_back(a.first);
            }
        }
        return ret;
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
