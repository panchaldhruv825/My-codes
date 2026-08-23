#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the num";
    cin>>num;
    vector<int>ls;
    for(int i=1;i<=sqrt(num);i++)//here sqrt take a little bit higher time so we can also wrtie i*i<=no
    {
        if(num%i==0)
        {
            ls.push_back(i);

        if((num/i)!=i)
        {
            ls.push_back(num/i);
        }
        }
        sort(ls.begin(),ls.end());
    }

    for(auto it:ls)
        {
            cout<<it<<" ";
        }


}
