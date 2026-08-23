#include<bits/stdc++.h>
using namespace std;
void rotateRight(int a[],int n,int k)
{
    k=k%n;
    vector<int>v;
    for(int i=n-k;i<n;i++)
    {
        v.push_back(a[i]);
    }
    for(int i=n-k-1;i>=0;i--)
    {
        a[i+k]=a[i];
    }
    for(int i=n-k;i<k;i++)
    {
        a[i]=v[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rotateRight(a,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
