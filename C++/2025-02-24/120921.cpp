#include <string>
#include <vector>
using namespace std;

int solution(string A, string B)
{
    int answer = -1;

	if (A == B)
		return 0;

	for (int i = 0; i < A.size(); i++)
	{
		string s = A.substr(A.size() - i) + A.substr(0, A.size() - i);

		if (s == B)
			return i;
	}

	return answer;
}
