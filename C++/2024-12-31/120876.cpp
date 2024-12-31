#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> lines) 
{
    int answer = 0;
	vector<int> line(201, 0);

	for (int i = 0; i < lines.size(); i++)
	{
		int s = lines[i][0];
		int e = lines[i][1];

		for (int j = s; j < e; j++)
		{
			line[j + 100]++;
		}
	}

	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] > 1)
			answer++;
	}

    return answer;
}
