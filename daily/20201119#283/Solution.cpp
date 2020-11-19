#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        for (auto it = nums.begin(); it != nums.end() - 1; ++it)
        {
            if (*it == 0)
            {
                auto tt = it + 1;
                while (1)
                {
                    if (*tt != 0)
                    {
                        *it = *tt;
                        *tt = 0;
                        break;
                    }
                    ++tt;
                    if (tt == nums.end())
                    {
                        return;
                    }
                }
            }
        }
    }
};

int main()
{
    Solution s = Solution();
    vector<int> in = {0, 1, 0, 3, 12};
    vector<int> cost = {3, 4, 5, 1, 2};
    s.moveZeroes(in);
    for (auto it = in.begin(); it != in.end(); ++it)
    {
        cout << "答案1: " << *it << endl;
    }

    vector<int> gas2 = {5};
    vector<int> cost2 = {4};
    // cout << "答案2: " << s.canCompleteCircuit(gas2, cost2) << endl;
    return 1;
}
