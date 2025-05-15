#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long solution(string numbers) 
{
    long long answer = 0;

    string stoi[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string s = "", temp = "";

    for (int i = 0; i < numbers.size(); i++)
    {
        temp += numbers[i];

        for (int j = 0; j < 10; j++)
        {
            if (temp.compare(stoi[j]) == 0)
            {
                s += '0' + j;
                temp = "";
                break;
            }
        }
    }

    answer = std::stoll(s);

    return answer;
}
