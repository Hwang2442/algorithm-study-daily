#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers) 
{
    string answer = "";

    sort(numbers.begin(), numbers.end(), [](int& a, int& b) {

        string s1 = to_string(a);
        string s2 = to_string(b);

        return s1 + s2 > s2 + s1;
		});

    if (numbers.front() == 0)
        return "0";

    for (int i = 0; i < numbers.size(); i++)
    {
        answer += to_string(numbers[i]);
    }

    return answer;
}
