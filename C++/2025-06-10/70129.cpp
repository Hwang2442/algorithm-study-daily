#include <string>
#include <vector>
#include <bitset>
using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer(2, 0);

	while (s != "1")
	{
		int len = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '0')
				answer[1]++;
			else
				len++;
		}

		string temp = bitset<128>(len).to_string();
		s = temp.substr(temp.find('1'));

		answer[0]++;
	}

    return answer;
}
