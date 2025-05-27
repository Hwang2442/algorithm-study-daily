#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) 
{
    int answer = 0;

    queue<pair<int, int>> going;
    int totalWeight = 0, index = 0;

    do
    {
        answer++;

        auto truck = going.front();
        if (truck.second + bridge_length == answer)
        {
            totalWeight -= truck.first;
            going.pop();
        }

        int nextWeight = truck_weights[index];
        if (index < truck_weights.size() && totalWeight + nextWeight <= weight && going.size() < bridge_length)
        {
            going.emplace(nextWeight, answer);
            totalWeight += nextWeight;
            index++;
        }
    } while (!going.empty());

    return answer;
}
