#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string s) 
{
    int answer = 0;

	for (int i = 0; i < s.size(); i++)
	{
		int count = i;
		stack<char> stk;
		stk.push(s[count]);
		for (int j = 1; j < s.size(); j++)
		{
			char c = s[(count + j) % s.size()];
			if (c == '[' || c == '{' || c == '(')
				stk.push(c);
			else if (!stk.empty())
			{
				if (c == ']' && stk.top() == '[')
					stk.pop();
				else if (c == '}' && stk.top() == '{')
					stk.pop();
				else if (c == ')' && stk.top() == '(')
					stk.pop();
			}
			else
			{
				stk.push(' ');
				break;
			}
		}

		if (stk.empty())
			answer++;
	}

    return answer;
}
