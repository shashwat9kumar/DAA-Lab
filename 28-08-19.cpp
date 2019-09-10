#include <iostream>
#include <cstdlib>
#include<stdio.h>

using namespace std;

int n,i_ele,j_ele,i,j;
double a,d;

void input()
{
	cout<<"Input the total number of elements in the arithmetic series\n";
	cin>>n;
	cout<<endl;
	do
	{
	cout<<"Enter the two positions where you want to enter the elements at(less than the total number of elements)"<<endl;	
	cin>>i>>j;
	cout<<endl;
	if(i>n || j>n)
	{
		cout<<"You entered the wrong positions"<<endl;
		continue;
	}
	else
	{
		cout<<"Enter the values of the positions at the the mentioned positions:"<<endl;
		cin>>i_ele>>j_ele;
		break;
	}
	}while(1);
		
		
}

void calculate()
{
	d=(i_ele-j_ele)/(i-j);
	a=i_ele-((i-1)*d);
}

void display()
{
	cout<<"\n\nThe arithmetic series is:\n";
	for(int x=1;x<=n;x++)
	{
		double temp= a + (x-1)*d;
		cout<<temp<<"	";
	}
}


int main()
{
	input();
	calculate();
	display();
	return 0;
}
