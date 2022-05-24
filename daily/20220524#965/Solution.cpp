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
    bool isUnivalTree(TreeNode* root) {
        if (!root) {
            return true;
        }
        if (root->left) {
            if (root->val != root->left->val || !isUnivalTree(root->left)) {
                return false;
            }
        }
        if (root->right) {
            if (root->val != root->right->val || !isUnivalTree(root->right)) {
                return false;
            }
        }
        return true;
    }
};


int main()
{
    Solution s = Solution();
    //{3,4},{2,3},{1,2}
    //{1,4},{2,3},{1,2}
    // vector<vector<int>> nums = { {3,4},{2,3},{1,2} };
    // // vector<int> ret = s.findRightInterval(nums);
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << "ret:" << ret[i] << endl;
    // }

    // int n = 8;
    // vector<int> ret = s.diStringMatch("IDID");
    // for (int i = 0;i < ret.size();++i)
    // {
    //     cout << ":" << ret[i] << endl;
    // }
    return 1;
}
