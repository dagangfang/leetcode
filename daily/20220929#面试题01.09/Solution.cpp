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
#include <numeric>

using namespace std;


class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if (n1 != n2) return false;
        if (n1 == 0)  return true;
        for (int i = 0;i < n2;++i)
        {
            int j = 0;
            int l = i;
            while (s1[l] == s2[j])
            {
                ++j;
                ++l;
                if (l >= n1)
                {
                    l = 0;
                }
                if (j == n2)
                    return true;
            }
        }
        return false;
    }
};



/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */



int main()
{
    // Solution s = Solution();
    // vector<int> arg = { 8,4,5,0,0,0,0,7 };
    // s.duplicateZeros(arg);
    // for (int i = 0;i < arg.size();++i)
    // {
    //     printf("%d \n", arg[i]);
    // }
    // return 1;
}

