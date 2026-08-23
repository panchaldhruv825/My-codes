#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>v,int n,int k)
{
    map<long long,int>mpp;
    long long sum=0;
    int maxlength=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum==k)
        {
            maxlength=max(maxlength,i+1);
        }
        long long rem=sum-k;
        if(mpp.find(rem)!=mpp.end())
        {
            int len=i-mpp[rem];
            maxlength=max(maxlength,len);
        }
        if(mpp.find(sum)==mpp.end())
        {
            mpp[sum]=i;
        }
    }
    return maxlength;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<longestSubarray(v,n,k);
    return 0;
}
