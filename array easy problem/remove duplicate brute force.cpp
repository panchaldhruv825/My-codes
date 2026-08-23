#include<bits/stdc++.h>
using namespace std;
int dup(int a[],int n)
{
  set<int>st;
  for(int i=0;i<n;i++)
  {
    st.insert(a[i]);
  }
  int index=0;
  for(auto it:st)//here TC=0(N + Nlog(n))
                 //and SC=0(1).
  {
    a[index]=it;
    index++;
  }
  return (index);
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
  cout<<dup(a,n);
  return 0;
}