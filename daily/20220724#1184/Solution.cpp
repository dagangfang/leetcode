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


class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sum = 0;
        int diff1 = 0;
        int l, r;
        if (start <= destination)
        {
            l = start;
            r = destination;
        }
        else
        {
            l = destination;
            r = start;
        }
        for (int i = 0;i < distance.size(); ++i)
        {
            sum += distance[i];
            if (i >= l && i < r)
            {
                diff1 += distance[i];
            }
        }
        return min(diff1, (sum - diff1));
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
