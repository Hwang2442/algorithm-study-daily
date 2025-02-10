#include <string>
#include <vector>
using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) 
{
    int answer = 0;

	for (int i = 0; i < schedules.size(); i++)
	{
		bool success = true;
		int sh = schedules[i] / 100;
		int sm = schedules[i] % 100;
		int setting = sh * 60 + sm + 10;

		for (int j = 0; j < 7; j++)
		{
			int day = startday + j;
			if (day % 7 == 6 || day % 7 == 0)
				continue;

			int rh = timelogs[i][j] / 100;
			int rm = timelogs[i][j] % 100;
			int realtime = rh * 60 + rm;

			if (realtime > setting)
			{
				success = false;
				break;
			}
		}

		if (success)
			answer++;
	}

    return answer;
}
