#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            // count=count+1;
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}