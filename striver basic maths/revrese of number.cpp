#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int reversenumber=0;
    while(n>0)
    {
        int remainder=n%10;
        reversenumber=reversenumber*10 + remainder;
        n=n/10;
    }
    cout<<reversenumber;
}
