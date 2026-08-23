#include<bits/stdc++.h>
using namespace std;
    int  partiton(vector<int>&vec,int low,int high)
    {
        int pivot=vec[low];
        int i=low;
        int j=high;
        while(i<j)
        {
            while(vec[i]<=pivot&&i<=high-1)//here basicallly we apply upto high -1 so it does not exceeds
            {
                i++;
            }
            while(vec[j]>pivot&&j>=low+1)//same reason as above
            {
                j--;
            }
            if(i<j)
            {
                swap(vec[i],vec[j]);
            }
        }
        swap(vec[low],vec[j]);
        return j;
    }
    void quicksort(vector<int>&vec,int low,int high)
    {
        if(low<high)
        {
            int pIndex=partiton(vec,low,high);//here basically first find the partiton point then again apply quicksort it will convert to single element
            quicksort(vec,low,pIndex-1);
            quicksort(vec,pIndex+1,high);
        }
    }
int main()
{
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    quicksort(vec,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;

}
