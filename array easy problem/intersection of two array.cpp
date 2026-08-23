#include<bits/stdc++.h>
using namespace std;
void intersection(int a1[],int n1,int a2[],int n2)
{
    int i=0;
    int j=0;
    vector<int>v;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            i++;
        }else if(a1[i]>a2[j])
        {
            j++;
        }else
        {
            v.push_back(a1[i]);
            i++;
            j++;
        }
    }
     for(auto it:v)
    {
        cout<<it<<" ";
    }

   /* set<int>st;

    for(auto it:v)    //these is when i want to remove the duplicate also;
    {
        st.insert(it);
    }
    for(auto it:st)
    {
        cout<<it<<" ";
    }*/


}
int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    intersection(a1,n1,a2,n2);
    return 0;

}
