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

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> numsSet;
        for (int num : nums) {
            numsSet.emplace(num);
        }
        bool inSet = false;
        int res = 0;
        while (head != nullptr) {
            if (numsSet.count(head->val)) {
                if (!inSet) {
                    inSet = true;
                    res++;
                }
            }
            else {
                inSet = false;
            }
            head = head->next;
        }
        return res;
    }
};


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

