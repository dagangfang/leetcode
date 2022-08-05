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
#include<numeric>

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
    void dfs(TreeNode* root, int val, int depth, int curDepth)
    {
        if (!root) return;
        if (curDepth == depth)
        {
            root->left = new TreeNode(val, root->left, nullptr);
            root->right = new TreeNode(val, nullptr, root->right);
        }
        else if (curDepth < depth) {
            dfs(root->left, val, depth, curDepth + 1);
            dfs(root->right, val, depth, curDepth + 1);
        }
        else
        {
            return;
        }
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1)
        {
            root = new TreeNode(val, root, nullptr);
        }
        else
        {
            dfs(root, val, depth, 2);
        }
        return root;
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
