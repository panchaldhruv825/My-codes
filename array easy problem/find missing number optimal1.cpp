#include<bits/stdc++.h>
using namespace std;
int missingNum(int a[],int n)
{
    int sum=((n+1)*(n+2))/2;
    int sumOf=0;
    for(int i=0;i<n;i++)
    {
        sumOf+=a[i];
    }
    int num=sum-sumOf;
    return num;
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

