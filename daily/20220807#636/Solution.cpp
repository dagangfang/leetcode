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
#include<numeric>

using namespace std;


// ["0:start:0","0:start:2","0:end:5","1:start:6","1:end:6","0:end:7"]
// ["0:start:0","1:start:5","2:start:6","3:start:9","4:start:11","5:start:12","6:start:14","7:start:15","1:start:24","1:end:29","7:end:34","6:end:37","5:end:39","4:end:40","3:end:45","0:start:49","0:end:54","5:start:55","5:end:59","4:start:63","4:end:66","2:start:69","2:end:70","2:start:74","6:start:78","0:start:79","0:end:80","6:end:85","1:start:89","1:end:93","2:end:96","2:end:100","1:end:102","2:start:105","2:end:109","0:end:114"]


class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ret(n);
        stack<int> stack;
        int preStasrt = 0;
        for (int i = 0;i < logs.size();++i)
        {
            vector<string> s;
            size_t from = 0, to = 0;
            while (string::npos != (to = logs[i].find(":", from))) {
                s.push_back(logs[i].substr(from, to - from));
                from = to + 1;
            }
            s.push_back(logs[i].substr(from, to));
            int index = atoi(s[0].c_str());
            int time = atoi(s[2].c_str());
            if (s[1] == "start")
            {
                if (stack.size() > 0)
                {
                    int preIndex = stack.top();
                    ret[preIndex] += time - preStasrt;
                    printf("%d %d %d %d\n", i, preIndex, time - preStasrt, ret[preIndex]);
                }
                preStasrt = time;
                stack.push(index);
            }
            else
            {
                ret[index] += time - preStasrt + 1;
                printf("%d %d %d %d\n", i, index, time - preStasrt + 1, ret[index]);
                preStasrt = time + 1;
                stack.pop();
            }
        }
        return ret;
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
