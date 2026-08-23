#include<bits/stdc++.h>
using namespace std;
void rotateRight(int a[],int n,int k)
{
    reverse(a,a+n-k);
    reverse(a+n-k,a+n);
    reverse(a,a+n);
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
