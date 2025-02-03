#include <string>
#include <vector>
using namespace std;

int solution(int chicken) 
{
    int answer = 0;
    
    while (chicken >= 10)
    {
        int coupon = chicken / 10;

        answer += coupon;
        chicken = chicken % 10 + coupon;
    }

    return answer;
}
