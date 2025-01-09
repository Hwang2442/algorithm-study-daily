#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) 
{
    string answer = "";

	int len = stoi(video_len.substr(0, 2)) * 60 + stoi(video_len.substr(3, 2));
	int start = stoi(op_start.substr(0, 2)) * 60 + stoi(op_start.substr(3, 2));
	int current = stoi(pos.substr(0, 2)) * 60 + stoi(pos.substr(3, 2));
	int end = stoi(op_end.substr(0, 2)) * 60 + stoi(op_end.substr(3, 2));

	for (int i = 0; i < commands.size(); i++)
	{
		int flag = commands[i] == "next" ? 10 : -10;

		if (current >= start && current <= end)
			current = end;

		current += flag;
		current = min(current, len);
		current = max(current, 0);

		if (current >= start && current <= end)
			current = end;
	}

	char buf[5];
	sprintf(buf, "%02d:%02d", current / 60, current % 60);
	answer = buf;

    return answer;
}
