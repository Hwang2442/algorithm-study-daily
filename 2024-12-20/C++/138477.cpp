#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(int k, vector<int> score) 
{
    vector<int> answer;
	multiset<int, greater<int>> rank;

	for (int i = 0; i < score.size(); i++)
	{
		rank.insert(score[i]);
		auto it = rank.begin();

		for (int j = 1; j < k && j < rank.size(); j++)
		{
			it++;
		}

		answer.push_back(*it);
	}

    return answer;
}
