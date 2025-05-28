#include <string>
#include <vector>
using namespace std;

vector<int> solution(int n, int s) 
{
	int begin = s / n;
	if (begin < 1)
		return { -1 };

    vector<int> answer = { begin };
	for (int i = 1; i < n; i++)
	{
		s -= answer.back();
		answer.push_back(s / (n - i));
	}

    return answer;
}
