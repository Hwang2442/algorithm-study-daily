#include <string>
#include <vector>
using namespace std;

int solution(int n)
{
	int answer = 0;

	for (int i = 0; i < n; i++)
	{
		while (true)
		{
			int temp = ++answer;
			bool pass = true;
			while (temp != 0)
			{
				int digit = temp % 10;
				if (digit == 3)
				{
					pass = false;
					break;
				}

				temp /= 10;
			}

			if (pass && answer % 3 != 0)
				break;
		}
	}

	return answer;
}
