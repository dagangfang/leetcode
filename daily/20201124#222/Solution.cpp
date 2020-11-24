#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;
        int num = 1;
        if (root->left)
        {
            num += countNodes(root->left);
        }
        if (root->right)
        {
            num += countNodes(root->right);
        }
        return num;
    }
};
int main()
{
    // Solution s = Solution();
    // vector<vector<int>> in = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    // coutvector(in);
    // sort(in.begin(), in.end(), cmp);
    // coutvector(in);
    // cout << "结果：" << s.findMinArrowShots(in) << endl;
    // vector<int> gas2 = {5};
    // vector<int> cost2 = {4};
    // cout << "答案2: " << s.canCompleteCircuit(gas2, cost2) << endl;
    return 1;
}
