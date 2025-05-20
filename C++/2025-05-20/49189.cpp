#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> edge) 
{
    vector<vector<bool>> graph(n, vector<bool>(n));

    for (int i = 0; i < edge.size(); i++)
    {
        int a = edge[i][0];
        int b = edge[i][1];

        graph[a - 1][b - 1] = true;
        graph[b - 1][a - 1] = true;
    }

    vector<bool> visited(n, false);
    vector<vector<int>> dist;

    dist.push_back({ 0 });
    visited[0] = true;

    for (int i = 0; i < n - 1; i++)
    {
        vector<int> v;
        for (int j = 0; j < dist.back().size(); j++)
        {
            int node = dist[i][j];
            for (int k = 0; k < n; k++)
            {
                if (node == k)
                    continue;

                if (graph[node][k] && !visited[k])
                {
                    v.push_back(k);
                    visited[k] = true;
                }
            }
        }

        if (v.empty())
            break;

        dist.push_back(v);
    }

    return dist.back().size();
}
