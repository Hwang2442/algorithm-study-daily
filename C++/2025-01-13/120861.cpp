#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) 
{
	vector<int> answer = { 0, 0 };
	vector<int> size = { board[0] / 2, board[1] / 2 };
	unordered_map<string, vector<int>> dirs = {
		{ "up", { 0, 1 } },
		{ "down", { 0, -1 } },
		{ "left", { -1, 0 } },
		{ "right", { 1, 0 } }
	};

	for (int i = 0; i < keyinput.size(); i++)
	{
		auto dir = dirs[keyinput[i]];
		vector<int> pos = { answer[0] + dir[0], answer[1] + dir[1] };

		
		if (abs(pos[0]) <= size[0] && abs(pos[1]) <= size[1])
			answer = pos;
	}

    return answer;
}
