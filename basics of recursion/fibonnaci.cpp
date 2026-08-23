#include<bits/stdc++.h>
using namespace std;//these is the example of multiple recursion call.
int fibonacci(int n)
{
    if(n<=0)
        return 0;
    if(n==1 || n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);

}
