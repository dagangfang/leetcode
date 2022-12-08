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
    bool squareIsWhite(string coordinates) {
        int n1 = coordinates[0] - 'a';
        int n2 = coordinates[1] - '1';
        return (n1 + n2) % 2 == 1;
    }
};



int main()
{
    // Solution s = Solution();

}

