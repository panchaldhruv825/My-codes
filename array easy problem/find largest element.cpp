#include<bits/stdc++.h>
using namespace std;
void largEle(int arr[],int n)//here basically brute force approach is first by quick and then print n-1 element
{
    int maxi=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[maxi])
        {
            maxi=i;
        }
    }
    cout<<arr[maxi];
}
int main()
{
    int n;
    cout<<"Enter the elements in a array";
    cin>>n;
    int arr[n];
    cout<<"Enter the values";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    largEle(arr,n);

    return 0;
}
