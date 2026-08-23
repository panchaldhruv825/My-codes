#include<bits/stdc++.h>
using namespace std;
void printnum(int i,int n)
{
    if(i>n)
    {
        return ;
    }
    cout<<i<<" ";
    printnum(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    printnum(1,n);
}
//time and space complexity for these is 0(logn) as  it requires an n opertons to stop the recursion and also stack  memory occupies same number to complete
