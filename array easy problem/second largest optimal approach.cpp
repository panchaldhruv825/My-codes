#include<bits/stdc++.h>
using namespace std;
int seclargest(int arr[],int n)
{
	int largest=arr[0];
	int seclarge=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			seclarge=largest;
			largest=arr[i];
		}else if(arr[i]<largest&&arr[i]>seclarge)
		{
			seclarge=arr[i];
		}
	}
	return seclarge;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	r=seclargest(arr,n);
	return r;

}