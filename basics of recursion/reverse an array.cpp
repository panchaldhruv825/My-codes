#include<bits/stdc++.h>
using namespace std;
void revArr(int arr[],int i,int n)//we can done easily using two pointers also i and j but it is recommand to as less variable as possible
{
    if(i>=n/2)
    {
        return ;
    }
    else
    {
        swap(arr[i],arr[n-i-1]);
    }
    revArr(arr,i+1,n);
}
int main()
{
    int n;
    cout<<"Enter the elements of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    revArr(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
