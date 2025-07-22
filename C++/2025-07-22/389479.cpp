#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> players, int m, int k) 
{
    int answer = 0;
	queue<int> servers;

	for (int i = 0; i < players.size(); i++)
	{
		while (!servers.empty() && servers.front() + k == i)
		{
			servers.pop();
		}

		int count = players[i] / m - servers.size();
		for (int j = 0; j < count; j++)
		{
			servers.push(i);
			answer++;
		}
	}

    return answer;
}
