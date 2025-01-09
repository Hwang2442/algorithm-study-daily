#include <string>
#include <vector>
using namespace std;

vector<int> solution(int num, int total) 
{
    vector<int> answer;

	for (int i = -1000; i < 1000; i++)
	{
		int sum = 0;

		for (int j = 0; j < num; j++)
		{
			sum += i + j;
			answer.push_back(i + j);
		}

		if (sum == total)
			break;

		answer.clear();
	}

    return answer;
}
