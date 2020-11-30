#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution
{
public:
    string reorganizeString(string S)
    {
        map<char, int> sMap = map<char, int>();
        for (auto s : S)
            ++sMap[s];
        int max = 0;
        int len = S.size();
        for (auto a : sMap)
            if (a.second > max)
                max = a.second;
        if (2 * max - len > 1)
            return "";
        else
        {
            if (max == 1)
                return S;
            vector<pair<char, int>> sVector = vector<pair<char, int>>();
            for (auto a : sMap)
                sVector.push_back(a);
            sort(sVector.begin(), sVector.end(), [](const auto &a, const auto &b) { return a.second > b.second; });
            string result = "";
            while (len > 0)
            {
                for (auto &sV : sVector)
                {
                    if (sV.second > 0)
                    {
                        cout << sV.first << " " << sV.second << " " << *result.rbegin() << endl;
                        if (*result.rbegin() == sV.first)
                        {
                            for (auto it = result.begin(); it != result.end(); ++it)
                            {
                                if (*it != sV.first && *(it + 1) != sV.first)
                                {
                                    cout << " " << *it << endl;
                                    result.insert(it + 1, sV.first);
                                    --sV.second;
                                    --len;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            result += sV.first;
                            --sV.second;
                            --len;
                        }
                    }
                }
            }
            return result;
        }
    }
};

int main()
{
    Solution s = Solution();
    string in = "baaba";
    // s.reorganizeString(in);
    cout << s.reorganizeString(in) << endl;

    return 1;
}
