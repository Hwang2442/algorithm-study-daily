#include <string>
#include <vector>
using namespace std;

int solution(int storey) 
{
    int answer = 0;

	while (storey > 0)
	{
		int floor = storey % 10;
		int next = storey / 10 % 10;

		if (floor > 5 || (floor >= 5 && next >= 5))
		{
			answer += 10 - floor;
			storey += 10 - floor;
		}
		else
		{
			answer += floor;
		}

		storey /= 10;
	}

    return answer;
}
