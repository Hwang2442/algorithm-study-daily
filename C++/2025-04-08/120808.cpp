#include <string>
#include <vector>
#include <numeric>
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) 
{
    vector<int> answer(2);

    answer[1] = lcm(denom1, denom2);
    answer[0] = (numer1* (answer[1] / denom1) + numer2 * (answer[1] / denom2));

    int gcd = std::gcd(answer[1], answer[0]);
    for (int i = 0; i < answer.size(); i++)
    {
        answer[i] /= gcd;
    }

    return answer;
}
