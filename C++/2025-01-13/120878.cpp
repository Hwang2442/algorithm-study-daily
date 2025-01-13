#include <string>
#include <vector>
using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    int x = a, y = b;
    while (y != 0)
    {
        int mod = x % y;
        x = y;
        y = mod;
    }

    b /= x;
    while (b % 2 == 0)
    {
        b /= 2;
    }
    while (b % 5 == 0)
    {
        b /= 5;
    }
    answer = b == 1 ? 1 : 2;

    return answer;
}
