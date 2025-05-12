#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <iterator>
using namespace std;

int solution(string str1, string str2) 
{
    vector<string> v1, v2;

    for (int i = 0; i + 1 < str1.size(); ++i) 
    {
        char c1 = str1[i], c2 = str1[i + 1];

        if (isalpha(c1) && isalpha(c2)) 
        {
            string s;
            s += toupper(c1);
            s += toupper(c2);
            v1.push_back(s);
        }
    }
    for (size_t i = 0; i + 1 < str2.size(); ++i) 
    {
        char c1 = str2[i], c2 = str2[i + 1];

        if (isalpha(c1) && isalpha(c2))
        {
            string s;
            s += toupper(c1);
            s += toupper(c2);
            v2.push_back(s);
        }
    }

    if (v1.empty() && v2.empty())
        return 65536;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<string> inter, uni;
    inter.reserve(min(v1.size(), v2.size()));
    uni.reserve(v1.size() + v2.size());

    auto itEnd1 = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(inter));
    auto itEnd2 = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(uni));

    float jaccard = (float)(inter.size()) / uni.size();
    return (int)(jaccard * 65536);
}
