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

using namespace std;



class Solution {
public:
    int addDigits(int num) {
        while (num > 9)
        {
            int sum = 0;
            while (num > 9)
            {
                sum += num % 10;
                num /= 10;
            }
            num += sum;
        }
        return num;
    }
};


int main()
{
    Solution s = Solution();
    string str = "12";
    int ret = s.addDigits(38);
    cout << "Solution:" << endl;
    cout << ret << endl;
    return 1;
}
