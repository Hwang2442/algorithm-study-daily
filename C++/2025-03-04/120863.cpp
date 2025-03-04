#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) 
{
    string answer = "";

    int x = 0;
    int num = 0;

    stringstream ss(polynomial);
    string buf;

    while (getline(ss, buf, '+'))
    {
        stringstream ss2(buf);
        string buf2;

        while (getline(ss2, buf2, ' '))
        {
            if (buf2.find('x') != string::npos)
            {
                string s = buf2.substr(0, buf2.size() - 1);
                x += s.empty() ? 1 : stoi(s);
            }
            else
            {
                if (!buf2.empty())
                    num += stoi(buf2);
            }
        }
    }

    if (x != 0)
        answer += x == 1 ? "x" : to_string(x) + "x";
    if (num != 0)
        answer += (!answer.empty() ? " + " : "") + to_string(num);
    
    return answer.empty() ? "0" : answer;
}
