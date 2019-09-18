#include <iostream>
using namespace std;

int max(int a, int b)
{
	return (a>b?a:b);
}

int maximum(int arr[],int n)
{
	int x=n/2;
	
	
	int initsum=0;
	for(int i=0;i<x;i++)
	{
		initsum+=arr[i];
	}
	
	cout<<"The sum of left subarray is: "<<initsum<<endl;
	
	int endsum=0;
	for(int i=x;i<n;i++)
	{
		endsum+=arr[i];
	}
	cout<<"The sum of rigt subarray is: "<<endsum<<endl;

	int msum=0;
	for(int i=1;i<=x;i++)
	{
		int sum=0;
		for(int j=i;j<i+x;j++)
		{
			sum+=arr[j];
		}
		msum=max(sum,initsum);
		initsum=msum;
	}
	cout <<endl;
	return msum;
	
}

int main()
{
	int arr[]={-2,1,7,4,-3,8,-1,-2};
	int n=8;
	cout<<"The maximum sum of subarray is : "<<maximum(arr,n)<<endl;
	return 0;
}
