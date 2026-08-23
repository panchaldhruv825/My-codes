#include<bits/stdc++.h>
using namespace std;
int linear(int a[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]==target)
       {
           return i;
       }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<linear(a,n,target);
    return 0;
}

