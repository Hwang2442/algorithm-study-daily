#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;

	vector<vector<int>> numberSets;
	vector<int> numberSet;
	string a = "";

	for (int i = 0; i < s.size(); i++)
	{
		if (isdigit(s[i]))
		{
			a += s[i];
		}
		else if (s[i] == ',' && !a.empty())
		{
			numberSet.push_back(stoi(a));
			a = "";
		}
		else if (s[i] == '}')
		{
			if (!a.empty())
			{
				numberSet.push_back(stoi(a));
				a = "";
			}

			if (!numberSet.empty())
			{
				numberSets.push_back(numberSet);
				numberSet.clear();
			}
		}
	}

	sort(numberSets.begin(), numberSets.end(), [](vector<int>& a, vector<int>& b) {
		return a.size() < b.size();
		});

	unordered_set<int> addedNumbers;
	for (int i = 0; i < numberSets.size(); i++)
	{
		for (int j = 0; j < numberSets[i].size(); j++)
		{
			int num = numberSets[i][j];

			if (addedNumbers.find(num) != addedNumbers.end())
				continue;

			answer.push_back(num);
			addedNumbers.insert(num);
		}
	}

    return answer;
}
