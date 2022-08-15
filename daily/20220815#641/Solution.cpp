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

class MyCircularDeque {
public:
    vector<int> v;
    int s;
    int n;
    MyCircularDeque(int k) {
        v = vector<int>(k, 0);
        s = 0;
        n = 0;
    }

    bool insertFront(int value) {
        if (n >= v.size())
            return false;
        --s;
        if (s < 0)
            s += v.size();
        v[s] = value;
        ++n;
        return true;
    }

    bool insertLast(int value) {
        if (n >= v.size())
            return false;
        if (s + n >= v.size())
        {
            v[s + n - v.size()] = value;
        }
        else
        {
            v[s + n] = value;
        }
        ++n;
        return true;
    }

    bool deleteFront() {
        if (n <= 0)
        {
            return false;
        }
        ++s;
        if (s >= v.size())
        {
            s = s - v.size();
        }
        --n;
        return true;
    }

    bool deleteLast() {
        if (n <= 0)
            return false;
        --n;
        return true;
    }

    int getFront() {
        if (n == 0) return -1;
        return v[s];
    }

    int getRear() {
        if (n == 0) return -1;
        if (s + n - 1 >= v.size())
        {
            return v[s + n-1 - v.size()];
        }
        return v[s + n - 1];
    }

    bool isEmpty() {
        return n == 0;
    }

    bool isFull() {
        return n == v.size();
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

