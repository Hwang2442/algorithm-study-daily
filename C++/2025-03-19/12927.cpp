#include <string>
#include <vector>
#include <queue>
#include <numeric>
using namespace std;

long long solution(int n, vector<int> works) 
{
    long long answer = 0;
	priority_queue<int> pq(works.begin(), works.end());

	if (accumulate(works.begin(), works.end(), 0) <= n)
		return answer;

	while (n > 0)
	{
		int work = pq.top();
		pq.pop();

		pq.push(work - 1);
		n--;
	}

	while (!pq.empty())
	{
		int work = pq.top();
		pq.pop();
		answer += work * work;
	}

    return answer;
}
