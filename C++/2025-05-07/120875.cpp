#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) 
{
	vector<vector<int>> pairs = { {0, 1, 2, 3}, {0, 2, 1, 3}, {0, 3, 1, 2} };

	for (int i = 0; i < pairs.size(); i++)
	{
		auto dot1 = dots[pairs[i][0]];
		auto dot2 = dots[pairs[i][1]];
		auto dot3 = dots[pairs[i][2]];
		auto dot4 = dots[pairs[i][3]];

		pair<float, float> v1 = make_pair(dot1[0] - dot2[0], dot1[1] - dot2[1]);
		pair<float, float> v2 = make_pair(dot3[0] - dot4[0], dot3[1] - dot4[1]);

		if (v1.second / v1.first == v2.second / v2.first)
			return 1;
	}

    return 0;
}
