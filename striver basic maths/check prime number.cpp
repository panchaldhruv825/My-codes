#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num<2)
    {
        cout<<"Is not the prime number";
    }
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i!=0)
        {
            cout<<"It is  the prime number";
            break;


        }
        else{
            cout<<"It is not prime number";
        }
    }
}
