#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) 
{
    long long answer = 0;

    long long minTime = 1;
    long long maxTime = *max_element(times.begin(), times.end()) * (long long)n;

    while (minTime <= maxTime)
    {
        long long mid = (minTime + maxTime) / 2;
        long long people = 0;

        for (int i = 0; i < times.size(); i++)
        {
            people += mid / (long long)times[i];
        }

        if (people >= n)
        {
            answer = mid;
            maxTime = mid - 1;
        }
        else
            minTime = mid + 1;
    }

    return answer;
}
