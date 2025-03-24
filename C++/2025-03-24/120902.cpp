#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    
    stringstream ss(my_string);
    string s, calc;

    while (ss >> s)
    {
        if (s == "+" || s == "-")
        {
            calc = s;
        }
        else
        {
            if (answer == 0)
                answer = stoi(s);
            else
            {
                answer += calc == "+" ? stoi(s) : -stoi(s);
            }
        }
    }

    return answer;
}
