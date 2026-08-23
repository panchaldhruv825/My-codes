#include<bits/stdc++.h>
using namespace std;
int sum=0;

void printSum(int i,int n)
{

    if(i>n)
    {
        return ;
    }
    else{
           sum += i;
    }
    printSum(i+1,n);

}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    printSum(1,n);
    cout<<sum<<endl;
}
