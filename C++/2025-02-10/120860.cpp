#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) 
{
    int answer = 0;

    vector<int> max(2, -256);
    vector<int> min(2, 256);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            max[j] = std::max(dots[i][j], max[j]);
            min[j] = std::min(dots[i][j], min[j]);
        }
    }

    answer = (max[0] - min[0]) * (max[1] - min[1]);

    return answer;
}
