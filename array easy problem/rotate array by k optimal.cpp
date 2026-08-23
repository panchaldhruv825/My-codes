#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n,int d)
{
  d=d%n;
  reverse(a,a+d);//TC=0(d)
  reverse(a+d,a+n);//TC=0(n-d)
  reverse(a,a+n);//TC=0(n) total TC=0(2n) and SC=0(1)
}
int main()
{
  int n;
  cin>>n;
  int d;
  cin>>d;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  rotate(a,n,d);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}