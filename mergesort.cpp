#include<bits/stdc++.h>
using namespace std;
void merg(vector<int>&vec,int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(vec[left]<=vec[right])
        {
            temp.push_back(vec[left]);
            left++;
        }
        else
        {
            temp.push_back(vec[right]);
            right++;
        }

    }
    while(left<=mid)
    {
         temp.push_back(vec[left]);
            left++;
    }
    while(right<=high)
    {
         temp.push_back(vec[right]);
            right++;
    }
    for(int i=low;i<=high;i++)
    {
        vec[i]=temp[i-low];
    }

}
void ms(vector<int>&vec,int low,int high)
{
    if(low==high)
    {
        return ;
    }
    int mid=(low+high)/2;
    ms(vec,low,mid);
    ms(vec,mid+1,high);
    merg(vec,low,mid,high);
}

int main()
{
    int n;
    cout<<"enter the number of elements in avector";
    cin>>n;
    vector<int>vec(n);
    cout<<"enter the elements in a vector";
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    ms(vec,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
   return 0;


}
