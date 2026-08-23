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
        for(int k=0;k<4-2*i+2;k++)
        {
            cout<<" ";
        }
        for(int m=0;m<i+1;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int d=0;d<n-1;d++)
    {
        for(int x=0;x<n-d-1;x++)
        {
            cout<<"*";
        }
        for(int y=0;y<2*d+2;y++)
        {
            cout<<" ";
        }
        for(int z=0;z<n-d-1;z++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
