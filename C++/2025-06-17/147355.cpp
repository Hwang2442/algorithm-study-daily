#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) 
{
    int answer = 0;
	auto a = stoull(p);

	for (int i = 0; i <= t.size() - p.size(); i++)
	{
		string s = t.substr(i, p.size());
		if (stoull(s) <= a)
			answer++;
	}

    return answer;
}
