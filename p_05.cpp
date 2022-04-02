#include<iostream>

/*
    Input  : 1001  (Binary)
    Output : 9     (Decimal)

*/

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;

        long long result = 0;
        int power2 = 1;

        for (int i = str.size() -1 ; i >= 0; --i)
        {
        int binary_digit = 1;
            binary_digit = str[i] - '0';
            result = result + binary_digit*power2;
            power2 = power2*2;            
        }
        cout<<result<<endl;    
    }
    

    return 0;
}