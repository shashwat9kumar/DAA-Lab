#include <iostream>
using namespace std;
int main()
{
	int arr[20];
	int n=20;
	int count=0;
	cout<<"Enter elements into the array"<<endl;
	for(int i=0;i<20;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			count++;
		}
	}
	int sarr1[count];
	int sarr2[n-count];
	int s1=0;
	int s2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			sarr1[s1]=arr[i];
			s1++;
		}
		else
		{
			sarr2[s2]=arr[i];
			s2++;
		}
	}
	cout<<"The two split arrays are:"<<endl;
	for(int i=0;i<(count);i++)
	{
		cout<<sarr1[i]<<"	";
	}
	cout<<endl; 
	for(int i=0;i<(n-count);i++)
	{
		cout<<sarr2[i]<<"	";
	}
	return 0;
}
