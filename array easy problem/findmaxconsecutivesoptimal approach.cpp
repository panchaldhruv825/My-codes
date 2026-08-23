#include<bits/stdc++.h>
using namespace std;
int maxconsecutive(int a[],int n)
{
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            maxi=max(maxi,count);

        }
        else
        {
            count=0;
        }

    }
    return maxi;//here to think about brute and better approach it takes a lot of time.
    //TC for these is 0(n).
    //SC for these is 0(1).
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
    cout<<maxconsecutive(a,n);
    return 0;
}
