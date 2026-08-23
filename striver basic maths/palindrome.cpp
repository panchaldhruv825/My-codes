#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int dup=num;
     int renum=0;
    while(num>0)
    {
        int remainder=num%10;
        renum=renum*10 + remainder;
        num=num/10;
    }

    if(renum==dup)
    {
        cout<<"Is is palindrome";
    }
    else
    {
        cout<<"It is not palindrome";
    }
}
