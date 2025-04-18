#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(int n, vector<vector<int>> results) 
{
    int answer = 0;

	vector<vector<vector<int>>> matches(n, vector<vector<int>>(2));
	for (int i = 0; i < results.size(); i++)
	{
		int winner = results[i][0] - 1;
		int loser = results[i][1] - 1;

		matches[winner][0].push_back(loser);
		matches[loser][1].push_back(winner);
	}

	for (int i = 0; i < n; i++)
	{
		int matchCount = 0;

		for (int j = 0; j < 2; j++)
		{
			vector<bool> visited(n, false);
			stack<int> stk;
			stk.push(i);
			visited[i] = true;

			while (!stk.empty())
			{
				int cur = stk.top();
				stk.pop();

				for (int k = 0; k < matches[cur][j].size(); k++)
				{
					int next = matches[cur][j][k];

					if (visited[next])
						continue;

					visited[next] = true;
					matchCount++;
					stk.push(next);
				}
			}
		}
		
		if (matchCount >= n - 1)
			answer++;
	}
	
    return answer;
}
