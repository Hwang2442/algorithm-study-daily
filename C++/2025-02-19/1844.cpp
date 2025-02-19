#include <vector>
#include <queue>
using namespace std;

struct Tile
{
public:
	int x;
	int y;
	int cost;

	Tile(int x, int y, int cost)
	{
		this->x = x;
		this->y = y;
		this->cost = cost;
	}
};

int solution(vector<vector<int>> maps)
{
	int answer = -1;
	int n = maps.size(), m = maps[0].size();
	vector<vector<int>> dirs = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	queue<Tile> q;

	q.push(Tile(0, 0, 1));
	visited[0][0] = true;

	while (!q.empty())
	{
		auto tile = q.front();
		q.pop();

		int x = tile.x;
		int y = tile.y;
		int cost = tile.cost;

		if (y == n - 1 && x == m - 1)
		{
			answer = cost;
			break;
		}

		for (int i = 0; i < 4; i++)
		{
			int dx = x + dirs[i][1];
			int dy = y + dirs[i][0];

			if (dx >= 0 && dx < m && dy >= 0 && dy < n && !visited[dy][dx] && maps[dy][dx] == 1)
			{
				q.push(Tile(dx, dy, cost + 1));
				visited[dy][dx] = true;
			}
		}
	}

    return answer;
}
