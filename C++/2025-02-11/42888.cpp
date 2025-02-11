#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> record) 
{
    vector<string> answer;
	vector<pair<string, string>> uid_commands;
	unordered_map<string, string> uid_name;

	for (int i = 0; i < record.size(); i++)
	{
		stringstream ss(record[i]);
		
		// Enter
		if (record[i][0] == 'E')
		{
			string enter, uid, name;
			ss >> enter >> uid >> name;

			uid_name[uid] = name;
			uid_commands.push_back({ uid, "님이 들어왔습니다." });
		}
		else if (record[i][0] == 'L')
		{
			string leave, uid;
			ss >> leave >> uid;

			uid_commands.push_back({ uid, "님이 나갔습니다." });
		}
		else
		{
			string change, uid, name;
			ss >> change >> uid >> name;

			uid_name[uid] = name;
		}
	}

	for (int i = 0; i < uid_commands.size(); i++)
	{
		answer.push_back(uid_name[uid_commands[i].first] + uid_commands[i].second);
	}

    return answer;
}
