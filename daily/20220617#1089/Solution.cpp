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
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int top = 0;
        int i = -1;
        while (top < n) {
            i++;
            if (arr[i] != 0) {
                top++;
            }
            else {
                top += 2;
            }
        }
        int j = n - 1;
        if (top == n + 1) {
            arr[j] = 0;
            j--;
            i--;
        }
        while (j >= 0) {
            arr[j] = arr[i];
            j--;
            if (!arr[i]) {
                arr[j] = arr[i];
                j--;
            }
            i--;
        }
    }
};





int main()
{
    Solution s = Solution();
    vector<int> arg = { 8,4,5,0,0,0,0,7 };
    s.duplicateZeros(arg);
    for (int i = 0;i < arg.size();++i)
    {
        printf("%d \n", arg[i]);
    }
    return 1;
}
