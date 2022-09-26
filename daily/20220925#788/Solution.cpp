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
    int rotatedDigits(int n) {
        int sum = 0;
        for (int i = 0;i <= n;++i)
        {
            string s = to_string(i);
            bool isOK = true;
            int flag = 0;
            for (char c : s)
            {
                if (c == '2' || c == '5' || c == '6' || c == '9')
                {
                    flag++;
                }
                else if (c == '0' || c == '1' || c == '8')
                {
                }
                else
                {
                    isOK = false;
                    break;
                }
            }
            if (isOK && flag > 0)
                ++sum;
        }
        return sum;
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

