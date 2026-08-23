#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
int partion(int *arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot&&i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot&&j>=low+1)
        {
            j++;
        }

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }

        swap(arr[low],arr[j]);

}
void qs(int arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int pIndex=partion(arr,low,high);
    qs(arr,low,pIndex-1);
    qs(arr,pIndex+1,high);
}
int  finsecond(int arr[],int n)
{
    int maxi=n-1;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[maxi]>arr[i])
        {
            maxi=i;
            break;
        }

    }
    return arr[maxi];
}

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    qs(arr,0,n-1);


}
