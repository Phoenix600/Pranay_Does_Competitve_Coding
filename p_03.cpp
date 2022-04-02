#include <iostream>

using namespace std;

char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    while (true)
    {
        string str;
        cin >> str;
        if (str.size() == 0)
            break;
        for (int i = 0; i < str.size(); i++)
        {
        std::cout << upper(str[i]);
        }
        std::cout<<endl;
    }
}

/*
    INPUT  :    5
                helloworld
    OUTPUT :
                10
                helloworld

*/