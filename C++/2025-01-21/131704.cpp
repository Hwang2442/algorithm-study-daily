#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> order) 
{
    int answer = 0;
    stack<int> sub;

    for (int i = 0; i < order.size(); i++)
    {
        sub.push(i + 1);

        while (!sub.empty() && sub.top() == order[answer])
        {
            sub.pop();
            answer++;
        }
    }

    return answer;
}
