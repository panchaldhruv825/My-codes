#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>v1,int n1,vector<int>v2,int n2)
{
    vector<int>ans;
    int vs[n2]={0};
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(v1[i]==v2[j] && vs[j]==0)
            {
                ans.push_back(v1[i]);
                vs[j]=1;
                break;
            }

        }
    }
     for(auto it:ans)
    {
        cout<<it;
    }
}
int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    vector<int>v1(n1);
    vector<int>v2(n2);
    for(int i=0;i<n1;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>v2[i];
    }
    intersection(v1,n1,v2,n2);

    return 0;
}
