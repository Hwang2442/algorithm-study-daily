#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> elements) 
{
	unordered_set<int> total;

	for (int i = 0; i < elements.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j < elements.size(); j++)
		{
			sum += elements[(i + j) % elements.size()];
			total.insert(sum);
		}
	}

    return total.size();
}
