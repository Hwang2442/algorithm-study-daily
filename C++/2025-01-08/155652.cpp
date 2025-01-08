#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

string solution(string s, string skip, int index) 
{
    string answer = "";
	unordered_set<char> ignore_ch;

	for (int i = 0; i < skip.size(); i++)
	{
		ignore_ch.insert(skip[i]);
	}

	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];

		for (int j = 0; j < index; j++)
		{
			c = ++c > 'z' ? 'a' : c;

			if (ignore_ch.find(c) != ignore_ch.end())
				j--;
		}
		
		answer += c;
	}

    return answer;
}
