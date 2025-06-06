#include <string>
#include <vector>
using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) 
{
    vector<vector<int>> dp(n, vector<int>(m, 0));

	for (const auto& puddle : puddles)
	{
		dp[puddle[1] - 1][puddle[0] - 1] = -1;
	}

	dp[0][0] = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dp[i][j] == -1)
				continue;

			if (i > 0 && dp[i - 1][j] != -1)
				dp[i][j] = (dp[i][j] + dp[i - 1][j]) % 1000000007;
			if (j > 0 && dp[i][j - 1] != -1)
				dp[i][j] = (dp[i][j] + dp[i][j - 1]) % 1000000007;
		}
	}
	

    return dp[n - 1][m - 1];
}
