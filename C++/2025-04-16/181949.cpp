#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a' - 'A';
        else
            str[i] += 'a' - 'A';
    }

    cout << str << endl;

    return 0;
}
