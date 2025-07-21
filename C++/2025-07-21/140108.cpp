#include <string>
#include <vector>
using namespace std;

int solution(string s) 
{
    int answer = 0;
	char x = s.front();
	int same = 0, diff = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == x)
			same++;
		else
			diff++;

		if (same == diff)
		{
			answer++;
			if (i + 1 < s.size())
			{
				x = s[i + 1];
				same = 0;
				diff = 0;
			}

			printf("%c\n", s[i]);
		}
		else if (i + 1 == s.size())
			answer++;
	}

	return answer;
}
