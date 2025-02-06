#include <string>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> computers) 
{
    int answer = 0;
	unordered_set<int> visited;

	for (int i = 0; i < n; i++)
	{
		if (visited.find(i) != visited.end()) 
			continue;

		queue<int> visit;
		visit.push(i);
		visited.insert(i);

		while (!visit.empty())
		{
			int current = visit.front();
			visit.pop();

			for (int j = 0; j < computers[current].size(); j++)
			{
				if (current == j)
					continue;

				if (computers[current][j] == 1 && visited.find(j) == visited.end())
				{
					visit.push(j);
					visited.insert(j);
				}
			}
		}

		answer++;
	}

    return answer;
}
