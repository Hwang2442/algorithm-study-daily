#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> triangle) 
{
    int answer = 0;

	for (int i = 1; i < triangle.size(); i++)
	{
		for (int j = 0; j < triangle[i].size(); j++)
		{
			int max = 0;

			int l = j - 1;
			int r = j;

			if (l >= 0)
				max = std::max(triangle[i][j] + triangle[i - 1][l], max);
			if (r < triangle[i - 1].size())
				max = std::max(triangle[i][j] + triangle[i - 1][r], max);

			triangle[i][j] = max;
		}
	}

	for (int i = 0; i < triangle.back().size(); i++)
	{
		answer = max(triangle.back()[i], answer);
	}

    return answer;
}
