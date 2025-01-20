#include <string>
#include <vector>
using namespace std;

int solution(int M, int N) 
{
    return M > N ? (N - 1) + (M - 1) * N : (M - 1) + (N - 1) * M;
}
