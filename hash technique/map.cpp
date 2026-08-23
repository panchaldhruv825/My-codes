#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //precompute
    map<int,int>mpp;//here there is no isue of space so we just declare it
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    //entering queries
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;//here map also store the key in a ascending oreder if you want iterate and see it
    }
    return 0;
}
