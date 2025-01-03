#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
	unordered_map<char, int> indexes;

	for (int i = 0; i < s.size(); i++)
	{
		answer.push_back(indexes.find(s[i]) == indexes.end() ? -1 : i - indexes[s[i]]);
		indexes[s[i]] = i;
	}

    return answer;
}
