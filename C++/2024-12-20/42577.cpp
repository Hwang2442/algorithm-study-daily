#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) 
{
    bool answer = true;
    vector<unordered_set<string>> numbers(20);

    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size(); i++)
    {
        numbers[phone_book[i].size() - 1].insert(phone_book[i]);

        for (int j = 1; j < phone_book[i].size(); j++)
        {
            string s = phone_book[i].substr(0, j);
            if (numbers[j - 1].find(s) != numbers[j - 1].end())
            {
                answer = false;
                break;
            }
        }

        if (!answer)
            break;
    }

    return answer;
}
