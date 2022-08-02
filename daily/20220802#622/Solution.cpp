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

using namespace std;


class MyCircularQueue {
public:
    vector<int> v;
    int start = 0;
    int n = 0;
    int max_n;

    MyCircularQueue(int k) {
        v = vector<int>(k, 0);
        max_n = k;
    }

    bool enQueue(int value) {
        if (n + 1 > max_n)
        {
            return false;
        }
        ++n;
        int next_index = start + n - 1;
        if (next_index >= max_n)
        {
            next_index -= max_n;
        }
        v[next_index] = value;
        return true;
    }

    bool deQueue() {
        if (n <= 0) return false;
        --n;
        start++;
        if (start >= max_n) {
            start -= max_n;
        }
        return true;
    }

    int Front() {
        if (n <= 0) return -1;
        return v[start];
    }

    int Rear() {
        if (n <= 0) return -1;
        int end_index = start + n - 1;
        if (end_index >= max_n) {
            end_index -= max_n;
        }
        return v[end_index];
    }

    bool isEmpty() {
        if (n <= 0) return true;
        return false;
    }

    bool isFull() {
        return n == max_n;
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
