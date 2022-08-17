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
    void diGui(TreeNode* root, int depth, int& deepest, int& sum) {
        if (!root->left && !root->right) {
            if (depth > deepest)
            {
                deepest = depth;
                sum = root->val;
            }
            else if (depth == deepest)
            {
                sum += root->val;
            }
            return;
        }
        if (root->left)
        {
            diGui(root->left, depth + 1, deepest, sum);
        }
        if (root->right)
        {
            diGui(root->right, depth + 1, deepest, sum);
        }
    }

    int deepestLeavesSum(TreeNode* root) {
        int deepest = 0;
        int sum = 0;
        diGui(root, 1, deepest, sum);
        return sum;
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

