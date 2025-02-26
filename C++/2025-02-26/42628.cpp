#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<string> operations) 
{
	vector<int> answer = { 0, 0 };
	set<int> numbers;

	for (int i = 0; i < operations.size(); i++)
	{
		if (operations[i][0] == 'I')
			numbers.insert(stoi(operations[i].substr(2)));
		else
		{
			if (numbers.empty())
				continue;

			if (operations[i][2] == '-')
				numbers.erase(numbers.begin());
			else
				numbers.erase(--numbers.end());
		}
	}

	if (!numbers.empty())
	{
		answer[0] = *--numbers.end();
		answer[1] = *numbers.begin();
	}

    return answer;
}
