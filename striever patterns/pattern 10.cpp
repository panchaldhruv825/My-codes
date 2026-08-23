#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int m=0;m<n-1;m++)
    {
        for(int k=0;k<n-m-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
