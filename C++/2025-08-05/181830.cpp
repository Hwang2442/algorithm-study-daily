#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) 
{
    vector<vector<int>> answer;

    if (arr.size() > arr.front().size())
    {
		int count = arr.size() - arr.front().size();
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < count; j++)
            {
                arr[i].push_back(0);
            }
        }
    }
    else
    {
        int count = arr.front().size() - arr.size();
        for (int i = 0; i < count; i++)
        {
			arr.push_back(vector<int>(arr.front().size(), 0));
        }
    }

    return arr;
}
