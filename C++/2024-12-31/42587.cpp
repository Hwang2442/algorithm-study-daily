#include <string>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int solution(vector<int> priorities, int location) 
{
    int answer = 0;

	queue<pair<int, int>> processes;
	map<int, int, greater<int>> priority_count;

	for (int i = 0; i < priorities.size(); i++)
	{
		priority_count[priorities[i]]++;
		processes.push(make_pair(priorities[i], i));
	}

	while (!processes.empty())
	{
		auto process = processes.front();
		processes.pop();

		if (process.first != priority_count.begin()->first)
		{
			processes.push(process);
			continue;
		}

		if (--priority_count[process.first] == 0)
			priority_count.erase(process.first);

		answer++;

		if (process.second == location)
			break;
	}

    return answer;
}
