#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> board) 
{
    int answer = 0;
	int n = board.size();
	int m = board[0].size();

	pair<int, int> dirs[] = { {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1} };

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] != 1)
				continue;

			for (int k = 0; k < 8; k++)
			{
				int dx = j + dirs[k].second;
				int dy = i + dirs[k].first;

				if (dx >= 0 && dx < m && dy >= 0 && dy < n && board[dy][dx] != 1)
				{
					board[dy][dx] = 2;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 0)
				answer++;
		}
	}

    return answer;
}
