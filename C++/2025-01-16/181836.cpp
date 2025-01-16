#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> picture, int k) 
{
    vector<string> answer;

	for (int i = 0; i < picture.size(); i++)
	{
		string s = "";

		for (int j = 0; j < picture[i].size(); j++)
		{
			for (int l = 0; l < k; l++)
			{
				s += picture[i][j];
			}
		}

		for (int j = 0; j < k; j++)
		{
			answer.push_back(s);
		}
	}

    return answer;
}
