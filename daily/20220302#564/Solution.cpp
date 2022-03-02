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
    string hw(string n) {
        for (int i = 0;i < n.size() / 2;++i)
        {
            n[n.size() - 1 - i] = n[i];
        }
        return n;
    };
    
    string nearestPalindromic(string n) {
        int num = n.size();
        int l = num / 2 - 1;
        int r = l;
        if (num % 2 == 1)
        {
            ++r;
        }
        int ls = l;
        int rs = r;
        string ret1;
        string ret2;
        bool isHW = true;
        if (n[l] == n[r] == '9')
        {
            // 1881
            // 1991
            // 2001
            while (l > 0 && n[l] != '9')
                --l;
            if (l == 0)
            {
                ret2 = string('0', num + 1);
                ret2[num] = ret2[0] = '1';
            }
            else
            {
                ret2 = string('0', num);
                for (int i = 0;i < l;++l)
                {
                    ret2[num - 1 - i] = ret2[i] = n[i];
                }
                ret2[num - 1 - l] = ret2[l] = n[l] + 1;
            }
        }
        else if (n[r] == n[l] == '0')
        {
            // 2002
            // 1991
            while (l > 0 && n[l] != '0')
                --l;
            if (n[l] == '1' && l == 0)
            {
                ret1 = string('9', num - 1);
            }
            else
            {
                ret1 = string('9', num);
                for (int i = 0;i < l;++l)
                {
                    ret1[num - 1 - i] = ret1[i] = n[i];
                }
                ret1[num - 1 - l] = ret1[l] = n[l] - 1;
            }
        }
        l = ls;
        r = rs;
        while (l > 0)
        {
            if (n[l] > n[r])
            {
                if (ret2.size() != 0)
                {
                    ret2 = hw(n);
                }
                if (ret1.size() != 0)
                {
                    n[ls] -= 1;
                    ret1 = hw(n);
                    n[ls] += 1;
                }

                break;
            }
            else if (n[l] < n[r])
            {
                if (ret1.size() != 0)
                {
                    ret1 = hw(n);
                }
                if (ret2.size() != 0)
                {
                    n[ls] += 1;
                    ret2 = hw(n);
                    n[ls] -= 1;
                }
                break;
            }
            --l;
            ++r;
        }
        if (ret1.size() != 0)
        {
            n[ls] -= 1;
            ret1 = hw(n);
            n[ls] += 1;
        }
        if (ret2.size() != 0)
        {
            n[ls] += 1;
            ret2 = hw(n);
            n[ls] -= 1;
        }
        long rl = stol(ret1);
        long ll = stol(ret2);
        long cl = stol(n);
        if (ll - rl > cl - ll)
        {
            return ret2;
        }
        return ret1;
    }
};



int main()
{
    Solution s = Solution();
    string str = "12";
    string ret = s.nearestPalindromic(str);
    cout << "Solution:" << endl;
    cout << ret << endl;
    return 1;
}
