#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[1000];
	for(int i=0;i<1000;i++)
	{
		arr[i]=0;
	}
	int address;
	do
	{
		printf("Enter the location where you want to store the data but less than 1000(Enter -1 to exit entering)\n");
	    
		scanf("%d",&address);
		if(address == -1)
		{
			break;
		}
		if(address >999 || address <0)
		{
			printf("Enter a valid address\n");
			continue;
		}
		printf("Enter the roll number of student\n");
		int roll;
		scanf("%d",&roll);
		arr[address]=roll;
	}while(address != -1);
	
	int count=0;
	for(int i=0;i<1000;i++)
	{
		if(arr[i] != 0)
		{
			count++;
		}
	}
	
	int sarr[count];
	int c=0;
	for(int i=0;i<1000;i++)
	{
		if(arr[i] != 0)
		{
			sarr[c]=arr[i];
			c++;
		}
	}
	
	printf("\n\nYour Unsorted list is :\n");
	for(int i=0;i<count;i++)
	{
		printf("%d",sarr[i]);
		printf("	");
	}
	printf("\n\n");
	
	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count -i -1;j++)
		{
			if(sarr[j]>sarr[j+1])
			{
				int temp=sarr[j];
				sarr[j]=sarr[j+1];
				sarr[j+1]=temp;
			}
		}
	}
	printf("Your Sorted list is :\n");
	for(int i=0;i<count;i++)
	{
		printf("%d",sarr[i]);
		printf("	");
	}
	printf("\n\n");
	return 0;
	
	
}
