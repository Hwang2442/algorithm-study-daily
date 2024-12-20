#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
	stack<char> stk;

	for (int i = 0; i < s.size(); i++)
	{
		if (!stk.empty() && stk.top() == s[i])
		{
			stk.pop();
			continue;
		}

		stk.push(s[i]);
	}

    return stk.empty();
}
