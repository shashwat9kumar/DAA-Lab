#include <iostream>
#include <cstdlib>
using namespace std;

void traversal(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
}




void insert(int *a,int n)
{
	cout<<"Enter "<<n<<" elements into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The array entered by you is:"<<endl;
	traversal(a,n);
	
}



void deletearray(int *a,int n)
{
	cout<<"Enter the element to be deleted"<<endl;
	int x;
	int loc=-1;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			loc=i;
			break;
		}
	}
	if(loc==-1)
	{
		cout<<"Element to be deleted not found"<<endl;
	}
	else
	{
		for(int i=loc;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		cout<<"Modified array is:"<<endl;
		traversal(a,(n-1));
	}
}


int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		arr[i]=rand()%100;
	}
	cout<<"The initial array is:"<<endl;
	traversal(arr,10);
	
	
	insert(arr,10);
	
	
	deletearray(arr,10);
	
	return 0;
}
