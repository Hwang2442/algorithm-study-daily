#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<vector<int>> score) 
{
    vector<int> answer(score.size());
	map<int, vector<int>, greater<int>> rank;

	for (int i = 0; i < score.size(); i++)
	{
		int avr = (score[i][0] + score[i][1]);
		rank[avr].push_back(i);
	}

	int ranking = 1;
	for (auto i = rank.begin(); i != rank.end(); i++)
	{
		for (int j = 0; j < i->second.size(); j++)
		{
			answer[i->second[j]] = ranking;
		}

		ranking += i->second.size();
	}

    return answer;
}
