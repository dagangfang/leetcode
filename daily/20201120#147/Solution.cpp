#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printLIst(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
};

class Solution
{
public:
    ListNode *insertionSortList(ListNode *head)
    {
        if (!head)
        {
            return head;
        }
        ListNode *newHead = new ListNode(head->val);
        ListNode *t, *t2 = nullptr;
        while (head->next)
        {
            t = head->next;
            head->next = t->next;
            if (t->val <= newHead->val)
            {
                t->next = newHead;
                newHead = t;
            }
            else
            {
                t2 = newHead;
                while (t2->next)
                {
                    if (t->val > t2->next->val)
                    {
                        t2 = t2->next;
                    }
                    else
                    {
                        break;
                    }
                }
                t->next = t2->next;
                t2->next = t;
            }
        }
        return newHead;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> in = {-1, 5, 3, 4, 0};
    ListNode *head, *step = nullptr;
    for (auto it = in.begin(); it < in.end(); ++it)
    {
        ListNode *t = new ListNode(*it);
        if (!head)
        {
            head = t;
            step = t;
        }
        else
        {
            step->next = t;
            step = t;
        }
    }
    printLIst(head);
    head = s.insertionSortList(nullptr);
    printLIst(head);
    // vector<int> gas2 = {5};
    // vector<int> cost2 = {4};
    // cout << "答案2: " << s.canCompleteCircuit(gas2, cost2) << endl;
    return 1;
}
