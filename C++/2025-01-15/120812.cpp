#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    int max = 0;
    unordered_map<int, int> counts;

    for (int i = 0; i < array.size(); i++)
    {
        int count = ++counts[array[i]];
        if (count > max)
        {
            max = count;
            answer = array[i];
        }
        else if (count == max)
        {
            answer = -1;
        }
    }

    return answer;
}
