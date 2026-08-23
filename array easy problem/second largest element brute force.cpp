#include<bits/stdc++.h>
using namespace std;
int partion(vector<int>&v,int low,int high)
{
  int pivot=v[low];
  int i=low;
  int j=high;
  while(i<j)
  {
    while(v[i]<=pivot && i<=high-1)
    {
      i++;
    }
    while(v[j]>pivot && j>=low+1)
    {
      j--;
    }
    if(i<j)
    {
      swap(i,j);
    }
  }
  swap(v[low],v[j]);
  return j;
}
void qs(vector<int>&v,int low,int high)
{
  if(low>high)
  {
    return ;
  }
  int pIndex=partion(v,low,high);
  qs(v,low,pIndex-1);
  qs(v,pIndex+1,high);
}
int seclar(vector<int>v,int n)
{
  int largest=n-1;
  for(int i=n-2;i>=0;i--)
    {
      if(v[i]!=v[largest])
      {
        return v[i];
      }
    }
    return -1;
}
int main()
{
  int n;
  cout<<"Enter the number of elements";
  cin>>n;
  vector<int>v(n);
  cout<<"ENter the elements in it";
  for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    qs(v,0,n-1);
    cout<<seclar(v,n);
    return 0;

}