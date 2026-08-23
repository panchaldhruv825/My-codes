#include<bits/stdc++.h>
using namespace std;
int missingNum(int a[],int n)
{
    int hash[n+1]={0};
    for(int i=0;i<=n;i++)
    {
        hash[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==0)
        {
            return i;
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
    cout<<missingNum(a,n);
    return 0;
}

