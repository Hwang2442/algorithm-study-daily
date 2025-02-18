#include <string>
#include <vector>
using namespace std;

int solution(vector<string> spell, vector<string> dic) 
{
    int answer = 0;

	for (int i = 0; i < dic.size(); i++)
	{
		bool exist = true;

		for (int j = 0; j < spell.size(); j++)
		{
			if (dic[i].find(spell[j]) == string::npos)
			{
				exist = false;
				break;
			}
		}

		if (exist)
		{
			answer = 1;
			break;
		}
	}

    return answer == 0 ? 2 : answer;
}
