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
    int dfs(TreeNode* root) {
        if (!root) return -1;
        int lh = dfs(root->left) + 1;
        int rh = dfs(root->right) + 1;
        return lh > rh ? lh : rh;
    }

    void dfs2(TreeNode* root, vector<vector<string>>& ret, int y, int x, int height) {
        if (!root) return;
        ret[y][x] = to_string(root->val);
        int diff = pow(2, height - y - 1);
        printf("dfs2 %d %d %d\n", x, y, diff);
        dfs2(root->left, ret, y + 1, x - diff, height);
        dfs2(root->right, ret, y + 1, x + diff, height);
    }

    vector<vector<string>> printTree(TreeNode* root) {
        int height = dfs(root);
        int m = height + 1;
        int n = pow(2, height + 1) - 1;
        printf("height %d %d %d\n", height, m, n);
        vector<vector<string>> ret(m, vector<string>(n, ""));
        dfs2(root, ret, 0, (n - 1) / 2, height);
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

