#include<bits/stdc++.h>
using namespace std;
vector<int> unionvec(vector<int>v1,int n1,vector<int>v2,int n2)
{
    int i=0;
    int j=0;
    vector<int>temp;
    while(i<n1 && i<n2)
    {
        if(v1[i]<v2[j])
        {
            if(temp.size()==0 ||temp.back()!=v1[i])
            {
                temp.push_back(v1[i]);
            }
            i++;
        }else
        {
           if(temp.size()==0 ||temp.back()!=v2[j])
            {
                temp.push_back(v2[j]);
            }
            j++;
        }
    }
    while(i<n1)
    {
         if(temp.size()==0 ||temp.back()!=v1[i])
            {
                temp.push_back(v1[i]);
            }
            i++;
    }
    while(i<n2)
    {
         if(temp.size()==0 ||temp.back()!=v2[j])
            {
                temp.push_back(v2[j]);
            }
            j++;
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
    unionvec(v1,n1,v2,n2);
    for(auto it:temp)
    {
        cout<<it;
    }
    return 0;


}
