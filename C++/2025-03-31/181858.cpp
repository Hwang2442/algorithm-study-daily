#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    vector<int> answer;
	unordered_set<int> numbers;

	for (int i = 0; i < arr.size(); i++)
	{
		if (numbers.find(arr[i]) == numbers.end())
		{
			answer.push_back(arr[i]);
			numbers.insert(arr[i]);

			if (answer.size() >= k)
				break;
		}
	}

	for (int i = answer.size(); i < k; i++)
	{
		answer.push_back(-1);
	}

    return answer;
}
