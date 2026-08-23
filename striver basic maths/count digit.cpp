#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int count=0;
    while(n>0)
    {
        int remainder=n%10;
        count=count + 1;
        n=n/10;

    }
    cout<<count<<endl;
    return 0;
}
