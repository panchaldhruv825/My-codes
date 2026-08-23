#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*i;k++)
        {
            cout<<" ";
        }
        for(int m=0;m<n-i;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int d=0;d<n;d++)
    {
        for(int p=0;p<d+1;p++)
        {
            cout<<"*";
        }
        for(int q=0;q<n-2*d+2;q++)
        {
            cout<<" ";
        }
         for(int r=0;r<d+1;r++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

