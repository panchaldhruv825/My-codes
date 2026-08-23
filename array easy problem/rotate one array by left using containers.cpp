#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n)
{
  vector<int>v;
  int i=a[0];
  for(int i=0;i<n;i++)
  {
    v.push_back(a[i]);
  }
  v.erase(v.begin());
  v.push_back(i);
  for(auto it:v)
  {
    cout<<it<<" ";
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
 rotate(a,n);
 return 0;
}
