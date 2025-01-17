#include <string>
#include <vector>
using namespace std;

string solution(int age) 
{
    string answer = "";
    vector<int> digits;

    do
    {
        digits.push_back(age % 10);
        age /= 10;
    } while (age != 0);

    for (int i = digits.size() - 1; i >= 0; i--)
    {
        answer += 'a' + digits[i];
    }

    return answer;
}
