#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxfreq=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //precompute
     map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second>maxfreq)
        {
            maxfreq=it.second;
            ans=it.first;
        }else if(it.second==maxfreq && it.first<ans)
        {
            ans=it.first;
        }
    }
    cout<<ans;
    return 0;
}
