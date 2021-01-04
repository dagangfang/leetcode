#include <iostream>
#include <vector>
using namespace std;

//* Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *initNode(vector<int> &v)
{
    ListNode *head = nullptr, *node;
    for (int i = 0; i < v.size(); ++i)
    {
        if (head)
        {
            node->next = new ListNode(v[i]);
            node = node->next;
        }
        else
        {
            head = node = new ListNode(v[i]);
        }
    }
    return head;
};

void printN(ListNode *l)
{
    while (l)
    {
        printf("%d ", l->val);
        l = l->next;
    }
    printf("\n");
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int i1 = 0, i2 = 0, i = 0, f = 0;
        ListNode *head = nullptr, *l;
        while (l1 || l2 || f == 1)
        {
            i1 = l1 ? l1->val : 0;
            i2 = l2 ? l2->val : 0;
            i = i1 + i2 + f;
            if (i >= 10)
            {
                i -= 10;
                f = 1;
            }
            else
            {
                f = 0;
            }
            if (head)
            {
                l->next = new ListNode(i);
                l = l->next;
            }
            else
            {
                head = l = new ListNode(i);
            }
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }

        return head;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> v = vector<int>{2, 4, 3};
    vector<int> v2 = vector<int>{5, 6, 4};
    ListNode *l1 = initNode(v);
    // ListNode *l2 = initNode(v2);
    printN(l1);
    // printN(l2);
    return 1;
}
