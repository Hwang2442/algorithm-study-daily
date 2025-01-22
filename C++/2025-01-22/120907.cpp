#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) 
{
    vector<string> answer(quiz.size());

	for (int i = 0; i < quiz.size(); i++)
	{
		string a, b, c, eq, op;
		stringstream ss(quiz[i]);
		ss >> a >> op >> b >> eq >> c;

		int x = stoi(a), y = stoi(b), z = stoi(c);
		int result = (op == "+") ? x + y : x - y;
		answer[i] = result == z ? "O" : "X";
	}

    return answer;
}
