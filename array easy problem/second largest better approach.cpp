#include<bits/stdc++.h>
using namespace std;
int second_largest(int arr[],int n)
{
  int largest=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]>=largest)
    {
      largest=arr[i];
    }
  }
  int seclarge=-1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>seclarge && arr[i]!=largest)
    {
      seclarge=arr[i];
    }
  }
  return seclarge;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<second_largest(arr,n)<<endl;//time complixity for these is basicaaly 0(2n).
  return 0;


}