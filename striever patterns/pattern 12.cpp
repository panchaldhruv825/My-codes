#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        for(int k=0;k<2*(n-i)-2;k++)
        {
            cout<<" ";
        }
        for(int m=i+1;m>0;m--)
        {
            cout<<m;
        }
        cout<<endl;


    }
}
