#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int length = gas.size();
        if (length == 1 && gas[0] >= cost[0])
            return 0;
        for (int i = 0; i < length; ++i)
        {
            int total_gas = gas[i] - cost[i];
            if (total_gas < 0)
            {
                continue;
            }
            int j = 1;
            int index = 0;
            while (true)
            {
                index = i + j;
                if (index >= length)
                {
                    index -= length;
                }
                total_gas = total_gas + gas[index] - cost[index];
                if (total_gas < 0)
                {
                    break;
                }
                ++j;
                if (j == length)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    cout << "答案1: " << s.canCompleteCircuit(gas, cost) << endl;
    vector<int> gas2 = {5};
    vector<int> cost2 = {4};
    cout << "答案2: " << s.canCompleteCircuit(gas2, cost2) << endl;
    return 1;
}
