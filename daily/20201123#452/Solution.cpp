#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void coutvector(vector<vector<int>> &points)
{
    cout << "########" << endl;
    for (auto it = points.begin(); it != points.end(); ++it)
    {
        cout << (*it)[0] << " " << (*it)[1] << endl;
    }
    cout << "########\n"
         << endl;
}

bool cmp(vector<int> left, vector<int> right)
{
    return left[0] == right[0] ? left[1] < right[1] : left[0] < right[0];
};

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        if (points.size() == 0)
        {
            return 0;
        }
        sort(points.begin(), points.end(), [](vector<int> &left, vector<int> &right) {
            return left[0] == right[0] ? left[1] <= right[1] : left[0] <= right[0];
        });
        // vector<int> rule = points[0];
        int last = points[0][1];
        int num = 1;
        for (auto it = points.begin() + 1; it != points.end(); ++it)
        {
            if ((*it)[0] <= last)
            {
                // rule[0] = (*it)[0];
                if (last > (*it)[1])
                {
                    last = (*it)[1];
                }
            }
            else
            {
                ++num;
                // rule[0] = (*it)[0];
                last = (*it)[1];
            }
        }
        return num;
    }
};

int main()
{
    Solution s = Solution();
    vector<vector<int>> in = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    // coutvector(in);
    // sort(in.begin(), in.end(), cmp);
    // coutvector(in);
    cout << "结果：" << s.findMinArrowShots(in) << endl;
    // vector<int> gas2 = {5};
    // vector<int> cost2 = {4};
    // cout << "答案2: " << s.canCompleteCircuit(gas2, cost2) << endl;
    return 1;
}
