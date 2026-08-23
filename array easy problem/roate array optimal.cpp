#include<bits/stdc++.h>
using namespace std;
void leftRotate(int a[],int n)
{
  int temp=a[0];
  for(int i=1;i<n;i++)
  {
    a[i-1]=a[i];
  }
  a[n-1]=temp;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)//time complexity for these is 0(n).
  {                   //space complexity for these 0(n).but the extra space i used is 0(1).
    cin>>a[i];
  }
  }
  leftRotate(a,n);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}