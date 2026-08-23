#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    int dup=num;
    int armnum=0;
    while(num>0)
    {
        int remain=num%10;
        armnum+=remain*remain*remain;
        num/=10;
    }
    if(armnum==dup)
    {
        cout<<"It is an armstrong num";
    }
    else{
        cout<<"It is not";
    }
}
