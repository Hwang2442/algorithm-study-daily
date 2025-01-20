#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) 
{
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> scoville_q(scoville.begin(), scoville.end());

    while (scoville_q.size() > 1)
    {
        int a = scoville_q.top();
        scoville_q.pop();

        if (a >= K)
            break;

        int b = scoville_q.top();
        scoville_q.pop();

        int c = a + b * 2;
        scoville_q.push(c);

        answer++;
    }

    return scoville_q.top() >= K ? answer : -1;
}
