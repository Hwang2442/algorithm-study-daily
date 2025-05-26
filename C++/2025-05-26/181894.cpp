#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int min = arr.size(), max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 2)
        {
            min = std::min(i, min);
            max = std::max(i, max);
        }
    }

    if (min <= max)
        return vector<int>(arr.begin() + min, arr.begin() + max + 1);
    else
        return { -1 };
}
