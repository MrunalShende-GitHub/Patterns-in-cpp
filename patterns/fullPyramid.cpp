#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n-1 + 1; i++)
    {
        for (int j = n-i; j > 1; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}