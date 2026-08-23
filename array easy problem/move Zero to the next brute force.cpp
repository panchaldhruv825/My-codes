#include<bits/stdc++.h>
using namespace std;
void moveZero(int a[],int n)
{
    vector<int>tmp;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            tmp.push_back(a[i]);
        }
    }
    int y=tmp.size();
    for(int i=0;i<y;i++)
    {
        a[i]=tmp[i];
    }
    for(int i=y;i<n;i++)
    {
        a[i]=0;
    }

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
    moveZero(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
