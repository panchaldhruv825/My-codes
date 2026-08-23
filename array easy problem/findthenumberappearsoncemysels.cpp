#include<bits/stdc++.h>
using namespace std;
int appearOnce(int a[],int n)
{
    int hash[n]={0};
    for(int i=0;i<n;i++)
    {
        hash[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[i]==1)//TC is 0(n),but we can optimize it by finding maximum element then TC=0(maxi+1).
                      //SC for these is 0(1).
        {
            return i;//it is a better solution only but if there is a very big array number than we have take unordered map.
        }
    }
    return -1;

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
    cout<<appearOnce(a,n);
    return 0;
}
