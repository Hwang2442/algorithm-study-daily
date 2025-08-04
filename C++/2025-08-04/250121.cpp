#include <string>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) 
{
    vector<vector<int>> answer;
	unordered_map<string, int> var_map = {
		{"code", 0},
		{"date", 1},
		{"maximum", 2},
		{"remain", 3}
	};

	map<int, vector<int>> sorted_data;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i][var_map[ext]] < val_ext)
		{
			sorted_data[data[i][var_map[sort_by]]] = data[i];
		}
	}

	for (const auto& data : sorted_data)
	{
		answer.push_back(data.second);
	}

    return answer;
}
