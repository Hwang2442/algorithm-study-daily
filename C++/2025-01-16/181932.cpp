#include <string>
#include <vector>
using namespace std;

string solution(string code) 
{
    string answer = "";
	int mode = 0;

	for (int i = 0; i < code.size(); i++)
	{
		if (code[i] == '1')
			mode = ++mode % 2;
		else
		{
			if (i % 2 == mode)
				answer += code[i];
		}
	}

    return answer == "" ? "EMPTY" : answer;
}
