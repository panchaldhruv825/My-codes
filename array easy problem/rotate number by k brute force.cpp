#include<bits/stdc++.h>
using namespace std;
void rotateK(int a[],int n,int k)
{
  k=k%n;

  vector<int>tmp;
    for(int i=0;i<k;i++)//here we use array also //TC=0(k)
    {                      //int tmp[d];
                          //for(int i=0;i<d;i++)
                          //    {
                               //     tmp[i]=a[i];
                            //  }
      tmp.push_back(a[i]);
    }
    
    for(int i=k;i<=n;i++)//TC=0(n-k)
    {
      a[i-k]=a[i];
    }
    int j=0;
    for(int i=n-k;i<n;i++)//for mathematically if you not used the j pointer then 
    {                     //instead of tmp[j] we write [i-(n-k)]
      a[i]=tmp[j];
      j++;                //TC=0(k)
    }

}                  // total TC=0(n+k) and SC=0(k)
int main()
{
  int n;
  cin>>n;
  int k;
  cin>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  rotateK(a,n,k);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
 
  return 0;
}