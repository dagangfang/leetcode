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
    void layerInsert(vector<Node*> roots, vector<vector<int>>& ret) {
        vector<Node*> nextRoot;
        vector<int> tmp;
        for (auto root : roots)
        {
            tmp.push_back(root->val);
            if (root->children.size() > 0)
            {
                nextRoot.insert(nextRoot.end(), root->children.begin(), root->children.end());
            }
        }
        if (tmp.size() > 0)
        {
            ret.push_back(tmp);
            layerInsert(nextRoot, ret);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ret;
        if (root)
        {
            vector<Node*> roots = { root };
            layerInsert(roots, ret);
        }
        return ret;
    }
};



int main()
{
    Solution s = Solution();
    string s1 = "abcde";
    string goal = "cdeab";
    bool b = s.rotateString(s1, goal);
    cout << "Solution:" << b << endl;
    // for (auto a : ret)
    // {
    //     cout << "ret:" << a << endl;
    // }
    return 1;
}
