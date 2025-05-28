#include <string>
#include <vector>
using namespace std;

int solution(vector<int> sides) 
{
    int max = std::max(sides[0], sides[1]), min = std::min(sides[0], sides[1]);
    return max - (max - min) + (max + min - 1) - max;
}
