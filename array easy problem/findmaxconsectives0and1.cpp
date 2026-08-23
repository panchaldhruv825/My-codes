#include<bits/stdc++.h>
using namespace std;
int maxconsecutive(int a[],int n)
{
    int count1=0;
    int count2=0;
    int maxi1=0;
    int maxi2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count1++;
            maxi1=max(maxi1,count1);
            count2=0;
        }
        else
        {
            count2++;
            maxi2=max(maxi2,count2);
            count1=0;
        }
    }
    return max(maxi1,maxi2);
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
