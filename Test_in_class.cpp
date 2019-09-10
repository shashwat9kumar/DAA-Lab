#include<iostream>
using namespace std;
int main()
{
	int arr[1000];
	cout<<"Enter the size of the array(less than 1000)"<<endl;
	int n;
	cin>>n;
	if(n>=1000)
	{
		cout<<"Size exceeded limit"<<endl;
		return 0;
	}
	cout<<"Enter elements into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"Enter the element to be searched"<<endl;
	int ele;
	cin>>ele;
	int beg=0,end=n-1,mid,check=-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==ele)
		{
			cout<<"Element found at location "<<mid<<endl;
			check=1;
			break;
		}
		else if(arr[mid]>ele)
		beg=mid+1;
		else
		end=mid-1;
	}
	if(check==-1)
	cout<<"Element not found"<<endl;
	return 0;
}
