#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char st='A';
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<st++;

        }

        for(int m=0;m<i;m++)
        {

            cout<<char(st-m-2);

        }
        cout<<endl;

    }
}
