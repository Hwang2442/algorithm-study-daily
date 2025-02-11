#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solution(int n, vector<string> words) 
{
	vector<int> answer(2, 0);
	unordered_set<string> pre_words = { words[0] };

	for (int i = 1; i < words.size(); i++)
	{
		if (words[i].front() != words[i - 1].back() || pre_words.find(words[i]) != pre_words.end())
		{
			answer[0] = i % n + 1;
			answer[1] = i / n + 1;

			break;
		}

		pre_words.insert(words[i]);
	}

    return answer;
}
