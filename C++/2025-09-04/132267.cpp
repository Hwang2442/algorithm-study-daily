#include <string>
#include <vector>
using namespace std;

int solution(int a, int b, int n) 
{
    int answer = 0;

	while (n >= a)
	{
		int bottles = (n / a) * b;
		answer += bottles;
		n = (n % a) + bottles;
	}

    return answer;
}
