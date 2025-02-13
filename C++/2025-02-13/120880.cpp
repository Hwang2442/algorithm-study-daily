#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numlist, int n) 
{
    sort(numlist.begin(), numlist.end(), [n](int a, int b) {
        int diff_a = abs(n - a);
        int diff_b = abs(n - b);

        return (diff_a == diff_b) ? a > b : diff_a < diff_b;
        });

    return numlist;
}
