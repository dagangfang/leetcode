#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

string sVector(vector<int> v)
{
    ostringstream oss;
    oss << "[";
    for (auto a : v)
        oss << a << ',';
    oss << ']';
    return oss.str();
};

int getLeft(vector<int> &nums, int n, int vaule, int start, bool &isFind)
{
    int i = start;
    for (; i < n; ++i)
    {
        if (vaule == nums[i])
        {
            isFind = true;
            return i;
        }
    }
    return start;
};

void diyMaxNumber(vector<int> &nums1, int s1, vector<int> &nums2, int s2, int k, vector<int> &result)
{
    if (k == result.size())
        return;
    int n1 = nums1.size(), n2 = nums2.size();
    int i1, i2;
    bool isFind1, isFind2;
    for (int i = 9; i >= 0; --i)
    {
        isFind1 = isFind2 = false;
        i1 = getLeft(nums1, n1, i, s1, isFind1);
        i2 = getLeft(nums2, n2, i, s2, isFind2);
        int s = 0;
        if (isFind1 && n1 - i1 + n2 - s2 >= k - result.size())
            s += 1;
        if (isFind2 && n1 - s1 + n2 - i2 >= k - result.size())
            s += 2;
        // cout << "s:" << s << endl;
        // if (s > 0)
        // {
        //     cout << "[" << i << "|" << s << "|" << k - result.size() << "]";
        // }
        switch (s)
        {
        case 0:
            break;
        case 1:
            result.push_back(nums1[i1]);
            diyMaxNumber(nums1, i1 + 1, nums2, s2, k, result);
            return;
        case 2:
            result.push_back(nums2[i2]);
            diyMaxNumber(nums1, s1, nums2, i2 + 1, k, result);
            return;
        case 3:
            result.push_back(nums1[i1]);
            vector<int> result1 = vector<int>();
            vector<int> result2 = vector<int>();
            // cout << "<==";
            diyMaxNumber(nums1, i1 + 1, nums2, s2, k - result.size(), result1);
            // cout << "==";
            diyMaxNumber(nums1, s1, nums2, i2 + 1, k - result.size(), result2);
            // cout << "==>";
            // cout << sVector(result1) << sVector(result2) << endl;
            for (int j = 0; j < result1.size(); ++j)
            {
                // cout << result1[j] << result2[j] << endl;
                if (result1[j] > result2[j])
                {
                    // cout << "按照1来" << endl;
                    result.insert(result.end(), result1.begin(), result1.end());
                    return;
                }
                else if (result1[j] < result2[j])
                {
                    // cout << "按照2来" << endl;
                    result.insert(result.end(), result2.begin(), result2.end());
                    return;
                }
            }
            result.insert(result.end(), result1.begin(), result1.end());
            // cout << "按照0来" << endl;
            // result.push_back(nums1[i1]);
            // diyMaxNumber(nums1, i1 + 1, nums2, s2, k, result);
            return;
        }
    }
};

class Solution
{
public:
    vector<int> maxNumber(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<int> result = vector<int>();
        diyMaxNumber(nums1, 0, nums2, 0, k, result);
        return result;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> in = vector<int>{6,9,2,3,6,7,9,9,0,9,6,2,3,3,3,4,7,4,5,6,8,5,0,4,9,9,0,7,8,5,0,0,3,7,9,3};
    vector<int> in2 = vector<int>{1,6,5,7,6,0,6,5,1,0,1,0,8,2,7,4,5,4,2,6,2,4,0,1,3,9,6,0,1,3,0,1,5,3,5,1,7,2,8,3,1,9,0,3,4,5,1,7,6,1,5,9,8,5,9,9,8,7,6,0,3,9,0,2,8,7,5,4,0,5,1,8,3,2,2,7,8,9,8,5,7,4,8,1,1,1,6,5,7,1,1,4,0,4,2,3,3,3,6,2,0,2,1,3,7,9,7,2,8,0,6,9,0,2,1,8,4,6,7,9,2,5,9,4,6,1,9,5,7,9,4,1,0,6,8,0,1,3,9,4,2,9,8,0,6,9,0,7,3,4,6,2,4,8,3,2,4,1,8,3,8,1,3,9,0,9,3,5,8,2,7,5,3,7,3,1,3,5,9,8};
    // vector<int> in = vector<int>{6, 7};
    // vector<int> in2 = vector<int>{6, 0, 4};
    vector<int> result = s.maxNumber(in, in2, 180);
    for (auto a : result)
    {
        cout << a << "|";
    }
    cout<<"\n"<<result.size()<<endl;
    return 1;
}
