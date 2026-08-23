#include<bits/stdc++.h>
using namespace std;
int removeDupli(int a[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(a[i]!=a[j])
        {
            a[i+1]=a[j];
            i++;
        }
    }
    return i;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)//here TC=0(n)and SC=0(1).
    {
        cin>>a[i];
    }
    cout<<removeDupli(a,n);
    return 0;
}
