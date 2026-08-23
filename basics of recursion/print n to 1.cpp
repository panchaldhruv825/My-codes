#include<bits/stdc++.h>
using namespace std;

void print(int n,int i)
{
    if(n<i)
    {
        return ;
    }
    cout<<n<<" ";
    print(n-1,i);
}
int main()
{
    int n;
    cout<<"Ente the number";
    cin>>n;
    print(n,1);
}
