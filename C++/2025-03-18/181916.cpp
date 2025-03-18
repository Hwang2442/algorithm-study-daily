#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int solution(int a, int b, int c, int d) 
{
    int answer = 1;
    map<int, int> numbers;

    numbers[a]++;
    numbers[b]++;
    numbers[c]++;
    numbers[d]++;

    if (numbers.size() == 1)
    {
        answer = 1111 * numbers.begin()->first;
    }
    else if (numbers.size() == 2)
    {
        auto s = numbers.begin();
        auto e = ++numbers.begin();

        int count = s->second;
        if (count == 3)
            answer = pow(10 * s->first + e->first, 2);
        else if (count == 2)
            answer = (s->first + e->first) * abs(s->first - e->first);
        else if (count == 1)
            answer = pow(10 * e->first + s->first, 2);
    }
    else if (numbers.size() == 3)
    {
        for (auto i = numbers.begin(); i != numbers.end(); i++)
        {
            if (i->second == 1)
                answer *= i->first;
        }
    }
    else
    {
        answer = numbers.begin()->first;
    }

    return answer;
}
