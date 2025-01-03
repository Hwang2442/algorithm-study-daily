#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) 
{
    int answer = 0;
    map<int, int> rank_index;

    for (int i = 0; i < rank.size(); i++)
    {
        if (attendance[i])
            rank_index.insert(make_pair(rank[i], i));
    }

    auto p = rank_index.begin();
    answer += 10000 * p++->second;
    answer += 100 * p++->second;
    answer += p->second;

    return answer;
}
