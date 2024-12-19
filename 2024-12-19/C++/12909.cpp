#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stk;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            stk.push(s[i]);
        else
        {
            if (stk.empty())
            {
                answer = false;
                break;
            }

            stk.pop();
        }
    }

    return answer && stk.empty();
}
