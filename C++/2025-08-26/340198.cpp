#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) 
{
    int max = 0;
	vector<vector<int>> dp(park.size(), vector<int>(park[0].size(), 0));

	for (int i = 0; i < park.size(); i++)
	{
		for (int j = 0; j < park[i].size(); j++)
		{
			if (park[i][j] != "-1")
				continue;

			if (i == 0 || j == 0)
			{
				dp[i][j] = 1;
				max = std::max(max, dp[i][j]);
			}
			else
			{
				dp[i][j] = min({ dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] }) + 1;
				max = std::max(max, dp[i][j]);
			}
		}
	}

	sort(mats.begin(), mats.end(), greater<int>());
	for (int i = 0; i < mats.size(); i++)
	{
		if (mats[i] <= max)
			return mats[i];
	}

    return -1;
}
