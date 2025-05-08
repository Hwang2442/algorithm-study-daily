#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<string>> board, int h, int w) 
{
    int answer = 0;

    string color = board[h][w];
    vector<pair<int, int>> dirs = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

    for (int i = 0; i < 4; i++)
    {
        auto side = make_pair(h + dirs[i].first, w + dirs[i].second);
        if (side.first >= 0 && side.first < board.size() && side.second >= 0 && side.second < board.front().size())
        {
            answer += color == board[side.first][side.second] ? 1 : 0;
        }
    }

    return answer;
}
