#include <string>
#include <vector>
using namespace std;

int solution(vector<int> date1, vector<int> date2) 
{
    int a = date1[2], b = date2[2];
    a += date1[1] * 30 + (date1[0] * 12 * 30);
    b += date2[1] * 30 + (date2[0] * 12 * 30);
    
    return a < b ? 1 : 0;
}
