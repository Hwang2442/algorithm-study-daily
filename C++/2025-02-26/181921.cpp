#include <string>
#include <vector>
using namespace std;

vector<int> solution(int l, int r) 
{
    vector<int> answer;

	for (int i = l; i <= r; i++)
	{
		int n = i;
		bool out = false;
		while (n != 0)
		{
			int a = n % 10;
			n /= 10;

			if (a == 5)
				continue;
			else if (a == 0)
				continue;
			else
			{
				out = true;
				break;
			}
		}

		if (!out)
		{
			answer.push_back(i);
		}
	}

	if (answer.size() == 0)
		answer.push_back(-1);

    return answer;
}
