#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
        }else
        {
            for(int k=0;k<1;k++)
            {
                cout<<"*";
            }
            for(int l=0;l<n-2;l++)
            {
                cout<<" ";
            }
            for(int m=0;m<1;m++)
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
}
