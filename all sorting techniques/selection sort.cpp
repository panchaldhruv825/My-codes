#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[mini]>arr[j])
            {
                mini=j;
            }
        }
        int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
    }
}
int main()
{
    int n;
    cout<<"Enter the elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"Sorted elements";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
