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
        unordered_map<string, string> m2 = unordered_map<string, string>();
        double a, b;
        for (int i = 0; i < equations.size(); ++i)
        {
            string &s1 = equations[i][0];
            string &s2 = equations[i][1];
            a = m[s1];
            b = m[s2];
            if (a == 0 && b == 0)
            {
                m[s1] = values[i];
                m[s2] = 1;
                m2[s1] = s2;
                m2[s2] = s2;
            }
            else if (a == 0)
            {
                m[s1] = b * values[i];
                m2[s1] = m2[s2];
            }
            else if (b == 0)
            {
                m[s2] = a / values[i];
                m2[s2] = m2[s1];
            }
            else
            {
                int num1 = 0, num2 = 0;
                for (auto &mm : m2)
                {
                    if (mm.second == m2[s1])
                        ++num1;
                    if (mm.second == m2[s2])
                        ++num2;
                }
                if (num1 < num2)
                {
                    for (auto &mm : m2)
                    {
                        if (mm.second == m2[s1])
                        {
                            m[mm.first] *= values[i] / (a / b);
                            if (mm.first != s1)
                                mm.second = m2[s2];
                        }
                    }
                    m2[s1] = m2[s2];
                }
                else
                {
                    for (auto &mm : m2)
                    {
                        if (mm.second == m2[s2])
                        {
                            m[mm.first] *= (a / b) / values[i];
                            if (mm.first != s2)
                                mm.second = m2[s1];
                        }
                    }
                    m2[s2] = m2[s1];
                }
            }
        }
        for (int i = 0; i < queries.size(); ++i)
        {
            string &s1 = queries[i][0];
            string &s2 = queries[i][1];
            a = m[s1];
            b = m[s2];
            if (m2.count(s1)!=0 && m2.count(s2)!=0 && m2[s1] == m2[s2])
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
