#include<bits/stdc++.h>
using namespace std;
int appearOnce(int a[],int n)
{
    int xor1=0;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^a[i];
    }
    return xor1;//TC for these 0(n) as it iterate over loop.
                //SC for these is 0(1).as it returns only one value as an integer.
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
    cout<<appearOnce(a,n);
    return 0;
}

