#include<bits/stdc++.h>
using namespace std;
bool palindrome(int i,string &s)//here time and space complexity will be 0(n/2) as it iterate over half part only.
{
    if(i>=s.size()/2)
    {
        return true;
    }
    if(s[i]!=s[s.size()-i-1])
    {
        return false;
    }
    else
    {
       return  palindrome(i+1,s);
    }
}
int main()
{
    string s;
    cout<<"Enter the name";
    cin>>s;
    cout<<palindrome(0,s);
}
