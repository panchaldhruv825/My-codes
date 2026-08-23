#include<bits/stdc++.h>
using namespace std;
int longSubarray(int a[],int n,int k)
{
    int left=0;
    int right=0;
    long long sum=a[0];
    int maxLen=0;
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n)
        {
            sum+=a[right];
        }
    }
    return maxLen;
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
    cout<<longSubarray(a,n,k);
    return 0;

}
