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

void diyMaxNumber(vector<int> &nums1, vector<int> &nums2, int &k, vector<int> &result)
{
    int n1 = nums1.size(), n2 = nums2.size();
    int i1, i2;
    int s1 = 0, s2 = 0;
    bool isFind1, isFind2;
    for (int i = 9; i >= 0; --i)
    {
        isFind1 = isFind2 = false;
        i1 = getLeft(nums1, n1, i, s1, isFind1);
        i2 = getLeft(nums2, n2, i, s2, isFind2);
        if (isFind1)
        {
            if (isFind2)
            {
            }
            else
            {
                if (n1 - i1 + n2 - s2 >= k)
                {
                    result.push_back(nums1[i1]);
                    --k;
                    s1 = i1 + 1;
                    break;
                }
            }
        }
        else if (isFind2)
        {
            if (n1 - s1 + n2 - i2 >= k)
            {
                result.push_back(nums2[i2]);
                --k;
                s2 = i2 + 1;
                break;
            }
        }
    }
};

class Solution
{
public:
    vector<int> maxNumber(vector<int> &nums1, vector<int> &nums2, int k)
    {
        int n1 = nums1.size(), n2 = nums2.size();
        int i1, i2;
        int s1 = 0, s2 = 0;
        bool isFind1, isFind2;
        vector<int> result = vector<int>();
        for (int i = 9; i >= 0; --i)
        {
            isFind1 = isFind2 = false;
            i1 = getLeft(nums1, n1, i, s1, isFind1);
            i2 = getLeft(nums2, n2, i, s2, isFind2);
            if (isFind1)
            {
                // cout << i << ":找到1  " << n1 - i1 << n2 - s2 << k << endl;
                if (isFind2)
                {
                }
                else
                {
                    if (n1 - i1 + n2 - s2 >= k)
                    {
                        result.push_back(nums1[i1]);
                        --k;
                        s1 = i1 + 1;
                        break;
                    }
                }
            }
            else if (isFind2)
            {
                // cout << i << ":只找到2  " << n1 - s1 << n2 - i2 << k << endl;
                if (n1 - s1 + n2 - i2 >= k)
                {
                    result.push_back(nums2[i2]);
                    --k;
                    s2 = i2 + 1;
                    break;
                }
            }
        }

        // while (k > 0)
        // {
        //     for (int i = 9; i >= 0; --i)
        //     {
        //         isFind1 = isFind2 = false;
        //         i1 = getLeft(nums1, n1, i, s1, isFind1);
        //         i2 = getLeft(nums2, n2, i, s2, isFind2);
        //         if (isFind1)
        //         {
        //             // cout << i << ":找到1  " << n1 - i1 << n2 - s2 << k << endl;
        //             if (isFind2)
        //             {
        //                 int left1 = n1 - i1 + n2 - s2 - k;
        //                 int left2 = n1 - s1 + n2 - i2 - k;
        //                 int t1, t2;
        //                 int max1, max2, maxi1, maxi2;
        //                 while (1)
        //                 {
        //                     max1 = -1;
        //                     max2 = -1;
        //                     t1 = left1;
        //                     t2 = left2;
        //                     while (left1 >= 0)
        //                     {
        //                         if (nums2[s2 + t1 - left1] > max1)
        //                         {
        //                             maxi1 = s2 + t1 - left1;
        //                             max1 = nums2[maxi1];
        //                         }
        //                         --left1;
        //                     }
        //                     while (left2 >= 0)
        //                     {
        //                         if (nums1[s1 + t2 - left2] > max2)
        //                         {
        //                             maxi2 = s1 + t2 - left2;
        //                             max2 = nums1[maxi2];
        //                         }
        //                         --left2;
        //                     }
        //                     if (max1 < 0 && max2 < 0)
        //                         break;
        //                     if (max2 < 0 || max1 > max2)
        //                     {
        //                         result.push_back(nums1[i1]);
        //                         --k;
        //                         s1 = i1 + 1;
        //                         break;
        //                     }
        //                     if (max1 < 0 || max2 > max1)
        //                     {
        //                         result.push_back(nums2[i2]);
        //                         --k;
        //                         s2 = i2 + 1;
        //                         break;
        //                     }
        //                     if (max1 == max2)
        //                     {
        //                         left1 = n1 - maxi2 + n2 - s2 - k;
        //                         left2 = n1 - s1 + n2 - maxi1 - k;
        //                     }
        //                 }
        //             }
        //             else
        //             {
        //                 if (n1 - i1 + n2 - s2 >= k)
        //                 {
        //                     result.push_back(nums1[i1]);
        //                     --k;
        //                     s1 = i1 + 1;
        //                     break;
        //                 }
        //             }
        //         }
        //         else if (isFind2)
        //         {
        //             // cout << i << ":只找到2  " << n1 - s1 << n2 - i2 << k << endl;
        //             if (n1 - s1 + n2 - i2 >= k)
        //             {
        //                 result.push_back(nums2[i2]);
        //                 --k;
        //                 s2 = i2 + 1;
        //                 break;
        //             }
        //         }
        //     }
        // }
        return result;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> in = vector<int>{8, 9};
    vector<int> in2 = vector<int>{3, 9, 2};
    // 0 2 3 4 9 2 9 01 8 9 9 3 4 9 9 8 9 2 9 8 9 0 1 8 9 2
    // 1 2 9
    // 1 2 9
    // cout << sVector(in) << endl;
    vector<int> result = s.maxNumber(in, in2, 3);
    for (auto a : result)
    {
        cout << a << endl;
    }
    return 1;
}
