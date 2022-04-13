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


class RandomizedSet {
public:
    vector<int> vec;
    RandomizedSet() {
    }

    bool insert(int val) {
        for (auto& a : vec)
        {
            if (a == val)
            {
                return false;
            }
        }
        vec.push_back(val);
        return true;
    }

    bool remove(int val) {
        for (auto i = vec.begin();i != vec.end();++i)
        {
            if (*i == val)
            {
                vec.erase(i);
                return true;
            }
        }
        return false;
    }

    int getRandom() {
        int index = rand() % vec.size();
        return vec[index];
    }
};

int main()
{
    Solution s = Solution();
    vector<string> s1 = { "gin", "zen", "gig", "msg" };
    // int b = s.uniqueMorseRepresentations(s1);
    // cout << "Solution:" << b << endl;
    // for (auto a : ret)
    // {
    //     cout << "ret:" << a << endl;
    // }
    return 1;
}
