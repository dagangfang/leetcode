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
    void sumLeaf(TreeNode* root, int& val, int& sum)
    {
        if (!root) return;
        int temp = (val << 1) | root->val;
        if (!root->left && !root->right)
        {
            sum += temp;
        }
        else
        {
            int temp2 = temp;
            sumLeaf(root->left, temp, sum);
            sumLeaf(root->right, temp2, sum);
        }
    }

    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        int val = 0;
        sumLeaf(root, val, sum);
        return sum;
    }
};

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
