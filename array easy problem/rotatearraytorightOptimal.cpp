#include<bits/stdc++.h>
using namespace std;
void rotatearray(int a[],int n,int k)
{
    k=k%n;
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
    rotatearray(a,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
