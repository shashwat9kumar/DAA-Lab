#include <iostream>
using namespace std;

int main()
{
	int arr[8];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<8;i++)
	{
		cin>>arr[i];
	}
	
	int sum=0,stpos=-1,enpos=-1;
	int n=8;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int tsum=0;
			for(int x=i;x<=j;x++)
			{
				tsum+=arr[x];
			}
			if(tsum>sum)
			{
				stpos=i;
				enpos=j;
				sum=tsum;
			}
		}
	}
	
	cout<<"The maximum sum is : "<<sum<<"\n"<<"Start position : "<<stpos<<"\t"<<"End position : "<<enpos<<endl;
	return 0;
}
