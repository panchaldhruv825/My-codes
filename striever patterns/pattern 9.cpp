#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }
        for(int m=0;m<n-i;m++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int d=0;d<n;d++)
    {
        for(int h=0;h<d;h++)
        {
            cout<<" ";
        }
        for(int x=0;x<2*(d-x)-1;x++)
        {
            cout<<"*";
        }
        for(int y=0;y<d;y++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
