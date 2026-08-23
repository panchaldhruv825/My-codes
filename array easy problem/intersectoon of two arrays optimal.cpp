#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int n1,int b[],int n2)
{
    int i=0;
    int j=0;
    vector<int>v;
    while(i<n1 && j<n2)
    {
        if(a[i]>b[j])
        {
            j++;
        }else if(a[i]<b[j])
        {
            i++;
        }else
        {
            v.push_back(a[i]);//Tc for these is in the worst case is0(n1+n2).
                              //SC for these in the worst case 0(n1+n2).
            i++;
            j++;
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }



}
int main()
{
    int n1;
    cin>>n1;
    int a[n1];
    int n2;
    cin>>n2;
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    intersection(a,n1,b,n2);
    return 0;
}
