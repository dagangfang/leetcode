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
    void sum(TreeNode* root, int cen, vector<int>& v) {
        if (!root) return;
        if (v.size() < cen + 1)
        {
            v.push_back(0);
        }
        v[cen] += root->val;
        sum(root->left, cen + 1, v);
        sum(root->right, cen + 1, v);
    }

    int maxLevelSum(TreeNode* root) {
        vector<int> v;
        sum(root, 0, v);
        int maxIndex = 0;
        int max = v[maxIndex];
        for (int i = 1;i < v.size();++i)
        {
            if (v[i] > max)
            {
                maxIndex = i;
                max = v[maxIndex];
            }
        }
        return maxIndex + 1;
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
