#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int balls, int share) 
{
    return round(tgamma(balls + 1) / (tgamma(share + 1) * tgamma(balls - share + 1)));
}
