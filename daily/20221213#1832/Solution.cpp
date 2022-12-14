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


class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        if (n < 26) return false;
        unordered_set<int> set;
        for (int i = 0;i < n;++i)
        {
            set.insert(sentence[i]);
        }
        return set.size() == 26;
    }
};



int main()
{
    // Solution s = Solution();

}

