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
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v(m, 0);
        for (int i = 0;i < n;++i)
        {
            for (int j = 0;j < m;++j)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0;k < m;++k)
                    {
                        if (matrix[i][k] == 0)
                        {
                            v[k] = 1;
                        }
                        matrix[i][k] = 0;
                    }
                    break;
                }
            }
        }
        for (int i = 0;i < m;++i)
        {
            if (v[i] == 1)
            {
                for (int j = 0;j < n;++j)
                {
                    matrix[j][i] = 0;
                }
            }
        }
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

