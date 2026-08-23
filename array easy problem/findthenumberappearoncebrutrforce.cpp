#include<bits/stdc++.h>
using namespace std;
int findonce(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int count=0;
        for(int j=0;i<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            return num;//TC for these 0(n*n)
                       //SC for these 0(1);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<findonce(a,n);
    return 0;
}
