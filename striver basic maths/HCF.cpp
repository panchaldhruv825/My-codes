#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;
    int gcd;
    for(int i=min(n1,n2);i>=1;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            int gcd=i;
            cout<<gcd;
        }
    }
    return 0;

}
//here the time complexity for these is minimum of n1,n2;
