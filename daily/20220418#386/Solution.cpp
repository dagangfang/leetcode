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
    vector<int> lexicalOrder(int n) {
        vector<string> ret;
        vector<int> retI;
        for (int i = 1;i <= n;++i)
        {
            ret.push_back(to_string(i));
        }
        sort(ret.begin(), ret.end());

        for (int i = 0;i < n;++i)
        {
            retI.push_back(stoi(ret[i]));
        }
        return retI;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> ret = s.lexicalOrder(10);
    for (int i = 0;i < ret.size();++i)
    {
        cout << "i:" << ret[i] << endl;
    }

    return 1;
}
