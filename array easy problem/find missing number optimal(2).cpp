#include<bits/stdc++.h>
using namespace std;
int missingNum(int a[],int n)
{
    int xor1=0;
    int xor2=0;
    int N=n+1;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^a[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^N;
    return xor1^xor2;//TC for these is 0(n);
                     //SC for these is 0(1).
                     //but the main advantage of it us if we take a bigger value than it also take it.

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
