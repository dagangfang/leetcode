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
    void func(TreeNode* root, int depth, vector<int>& ret) {
        if (depth + 1 > ret.size())
        {
            ret.push_back(root->val);
        }
        else
        {
            ret[depth] = max(ret[depth], root->val);
        }
        if (root->left)
        {
            func(root->left, depth + 1, ret);
        }
        if (root->right)
        {
            func(root->right, depth + 1, ret);
        }

    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> ret;
        if (!root) return ret;
        func(root, 0, ret);
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
