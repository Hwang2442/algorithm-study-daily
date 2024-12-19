#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
	vector<int> answer;
	int days = 0, order = 0, today = days;

	while (order < progresses.size())
	{
		int progress = progresses[order];
		if (progress + speeds[order] * days >= 100)
		{
			if (today < days)
			{
				answer.push_back(0);
				today = days;
			}

			answer.back()++;
			order++;

			continue;
		}

		days++;
	}

	return answer;
}
