#include<bits/stdc++.h>
using namespace std;
int findonce(int a[],int n)
{
    map<long long,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]]++;//basically for these TC of ordered map is 0(nlogM) and for unordered for avg is 0(n) in the worst case or blue moon is)(n*n).
                    //M is n/2+1 bcz in the map it reduce double.
                    //SC for these is 0(n/2 +1 ).
    }
    for(auto it:mpp )
    {
        if(it.second==1)
        {
            return it.first;//here TC is 0(n/2+1);
        }
    }
    return -1;//TOTAL TC for these o(nlog(n/2+1))+0(n/2+1).
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
    cout<<findonce(a,n);
    return 0;
}

