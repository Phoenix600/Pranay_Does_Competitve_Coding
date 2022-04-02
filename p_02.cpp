#include<iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    string string_rev;
    for (int i = str.size()-1; i >= 0; --i)
    {
        string_rev.push_back(str[i]);
    }
    if(str == string_rev)
    {
        std::cout<<"YES";
    }else{
        std::cout<<"NO";
    }
    return 0;
}

/*
    Check whether the string is palidrome or not
    If yes then print YES
    if no then print NO
*/