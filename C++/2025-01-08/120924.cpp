#include <string>
#include <vector>
using namespace std;

int solution(vector<int> common) 
{
    int answer = 0;

    int a = common[1] - common[0];
    int b = common[2] - common[1];
    
    answer = a == b ? common.back() + a : common.back() * (b / a);

    return answer;
}
