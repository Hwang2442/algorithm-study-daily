#include <string>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

int solution(int cacheSize, vector<string> cities) 
{
	if (cacheSize == 0)
		return cities.size() * 5;

    int answer = 0;

	queue<string> cacheOrder;
	unordered_set<string> cache;

	for (int i = 0; i < cities.size(); i++)
	{
		string s = cities[i];
		for (int j = 0; j < s.size(); j++)
		{
			s[j] += s[j] >= 'a' ? 0 : 'a' - 'A';
		}

		if (cache.find(s) != cache.end())
		{
			answer++;

			vector<string> temp;
			while (!cacheOrder.empty())
			{
				string a = cacheOrder.front();
				cacheOrder.pop();

				if (a != s)
					temp.push_back(a);
			}

			temp.push_back(s);
			for (int j = 0; j < temp.size(); j++)
			{
				cacheOrder.push(temp[j]);
			}
		}
		else
		{
			answer += 5;

			if (cache.size() >= cacheSize)
			{
				string remove = cacheOrder.front();
				cache.erase(remove);
				cacheOrder.pop();
			}

			cacheOrder.push(s);
			cache.insert(s);
		}
	}

    return answer;
}
