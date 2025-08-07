#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<string> solution(vector<vector<string>> tickets) 
{
    vector<string> answer;
	stack<string> s;
	vector<bool> used(tickets.size(), false);

	sort(tickets.begin(), tickets.end());

	s.push("ICN");

	while (!s.empty())
	{
		string current = s.top();

		if (answer.size() == tickets.size())
		{
			answer.insert(answer.begin(), current);
			break;
		}

		bool found = false;

		for (int i = 0; i < tickets.size(); i++)
		{
			// 다음 행선지 탐색
			if (!used[i] && tickets[i][0] == current)
			{
				used[i] = true;
				s.push(tickets[i][1]);
				found = true;
				break;
			}
		}

		// 다음 행선지가 없을 경우
		if (!found)
		{
			answer.insert(answer.begin(), s.top());
			s.pop();
		}
	}

    return answer;
}
