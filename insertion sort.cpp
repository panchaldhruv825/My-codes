#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])//here j cannot be zero bcz if we put zero then its previous elemnt will be at index -1 which is not possible
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the elements of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"sorted array";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
