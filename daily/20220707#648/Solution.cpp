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
    string check(vector<string>& sd, vector<int>& id, string& sentence, int l, int r) {
        int n = id.size();
        for (int i = 0; i < n; ++i)
        {
            if (id[i] > r - l)
            {
                break;
            }
            bool flag = true;
            for (int j = 0; j < sd[i].size(); ++j)
            {
                if (sentence[l + j] != sd[i][j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                return sd[i];
            }
        }
        return sentence.substr(l, r - l);
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        sort(dictionary.begin(), dictionary.end(), [](string& s1, string& s2) {return s1.size() < s2.size();});
        vector<int> id;
        for (int i = 0;i < dictionary.size();++i)
        {
            id.push_back(dictionary[i].size());
        }
        string ret;
        int n = sentence.size();
        int l = 0;
        for (int i = 0;i < n;++i)
        {
            if (sentence[i] == ' ')
            {
                if (l < i)
                {
                    ret += check(dictionary, id, sentence, l, i);
                    ret += ' ';
                }
                l = i + 1;
            }
            else if (i == n - 1 && l < i + 1)
            {
                ret += check(dictionary, id, sentence, l, i + 1);
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
