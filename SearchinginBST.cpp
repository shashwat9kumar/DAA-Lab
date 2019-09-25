#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	cout<<"Enter 10 elements in array"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int n=10;
	
	int start=0;
	int end=n-1;
	int check=-1;
	
	
	cout<<"Enter the number to be found"<<endl;
	int ele;
	cin >> ele;
	
	
	while (start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==ele)
		{
			cout<<"Element found at "<<(mid+1)<<endl;
			check=1;
			break;
		}
		else if(ele<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	if(check==-1)
	{
		cout<<"element not found"<<endl;
	}
	return 0;
}
