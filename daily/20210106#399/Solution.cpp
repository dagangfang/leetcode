#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <deque>
#include <limits.h>
#include <string.h>

using namespace std;

class Solution
{
public:
    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        vector<double> ret = vector<double>();
        unordered_map<string, double> m = unordered_map<string, double>();
        double a, b;
        for (int i = 0; i < equations.size(); ++i)
        {
            a = m[equations[i][0]];
            b = m[equations[i][1]];
            if (a == b == 0)
            {
                m[equations[i][0]] = values[i];
                m[equations[i][1]] = 1;
            }
            else if (a == 0)
            {
                m[equations[i][0]] = m[equations[i][1]] * values[i];
            }
            else if (b == 0)
            {
                m[equations[i][1]] = m[equations[i][0]] / values[i];
            }
            else
            {
                printf("错误：%f %f\n", a, b);
            }
        }
        for (int i = 0; i < queries.size(); ++i)
        {
            a = m[queries[i][0]];
            b = m[queries[i][1]];
            if (a != 0 && b != 0)
            {
                ret.push_back(a / b);
            }
            else
            {
                ret.push_back(-1);
            }
        }
        return ret;
    }
};

int main()
{
    Solution s = Solution();
    // vector<int> in = vector<int>{2, 7, 4, 1, 8, 1};
    // printf("结果：%d \n", s.fib(7));
    unordered_map<int, int> m = unordered_map<int, int>();
    cout << m[1] << endl;
    m[2] = 0;
    cout << m[2] << endl;
    printf("%d %d\n", m[1], m[2]);
    return 1;
}
