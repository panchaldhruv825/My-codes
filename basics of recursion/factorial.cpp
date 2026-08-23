#include<bits/stdc++.h>
using namespace std;
 int factorial=1;
void fact(int i,int n)
{

    if(i>n)
    {
        return ;
    }
    factorial*=i;
    fact(i+1,n);

}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    fact(1,n);
    cout<<factorial<<endl;

}
