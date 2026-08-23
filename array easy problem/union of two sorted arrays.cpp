#include<bits/stdc++.h>
using namespace std;
void unionarr(int a1[],int n1,int a2[],int n2)
{
    set<int>st;
    for(int i=0;i<n1;i++)
    {
        st.insert(a1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        st.insert(a2[i]);
    }
    int n3=st.size();
    int temp[n3];
    int i=0;
    for(auto it:st)
    {
        temp[i]=it;
        i++;
    }
     for(int i=0;i<n3;i++)
    {
        cout<<temp[i]<<" ";
    }



}

int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    int a2[n2];
    for(int j=0;j<n2;j++)
    {
        cin>>a2[j];
    }
    unionarr(a1,n1,a2,n2);


    return 0;
}
