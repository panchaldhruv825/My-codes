#include<bits/stdc++.h>
using namespace std;
int missingNum(int a[],int n)
{
    int N=n+1;
    int sumof=(N*(N+1))/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    int number=sumof-sum;//TC for these o(n) as it iterates only one loop.
                         //Sc for these 0(1) as it returns 1 number only.
                         //but here there will be an segmentation fault if we put larger value like 10*5.
    return number;
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
