#include<bits/stdc++.h>
using namespace std;
int missingNum(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return i;
        }
    }
}//Tc for these 0(n*2)in the worst case as it iterate through the last element of the array.
//sc for these is 0(1) as it returns the number.
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
