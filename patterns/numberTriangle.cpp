#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<i;j++)
        {
            count=count+1;
            cout<<count;
        }
        cout<<endl;
    }
return 0;
}