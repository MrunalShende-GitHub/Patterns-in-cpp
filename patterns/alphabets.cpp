#include <iostream>
using namespace std;
int main()
{
    char input, alphabet = 'A';
    int count = 0;
    int n;
    cout<<"enter the alphabet you want to see in last sentence : ";
    cin >> input;
    for (int i = 1; i <= (input-'A'+1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // count=count+1;
            cout << alphabet;
            //cout << endl;
        }
       cout << endl;
        alphabet = alphabet+1;
       
    }
    return 0;
}