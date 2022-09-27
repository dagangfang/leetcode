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
    bool CheckPermutation(string s1, string s2) {
        map<char, int> m;
        for (auto& a : s1)
        {
            if (m.count(a) == 0)
            {
                m[a] = 1;
            }
            else
            {
                m[a]++;
            }
        }
        for (auto& a : s2)
        {
            if (m.count(a) == 0)
            {
                return false;
            }
            else
            {
                m[a]--;
            }
        }
        for (auto& a : m)
        {
            if (a.second != 0)
                return false;
        }
        return true;
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

