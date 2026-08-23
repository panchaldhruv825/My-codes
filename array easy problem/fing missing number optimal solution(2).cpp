#include<bits/stdc++.h>
using namespace std;
int missingNum(int a[],int n)
{
    int xor1=0;
    int xor2=0;
    int N=n+1;
    for(int i=0;i<n;i++)
    {
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1^xor2;//here TC is 0(n) as it the loop iterate to one only.
                     //here space complexity is also 0(1).as it return an integer value only.
                     //but it is more preferable then optimation 1 method bcz if we take higher value 10*5 than it will gave segmentaion fault but in xor it will not gave so
                     //it is slightly better.
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
