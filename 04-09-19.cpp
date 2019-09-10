#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*head;



void insertAtEnd()
{
	int n;
	cout<<"Enter positive numeric data into the list(Enter -1 to terminate insertion)"<<endl;
	do
	{
		
		cin>>n;
		if(n==-1)
		{
			return;
		}
		else
		{
			struct node *temp =new node;
			temp->data=n;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
			}
			else
			{
				temp->next=head;
				head=temp;
			}
		}
	}while(n!=-1);
}

void display()
{
	for(struct node *t=head;t!=NULL;t=t->next)
	{
		cout<<"["<<t<<"]  "<<t->data<<"  ["<<t->next<<"]\t";
		cout<<"    ---->    ";
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
}

void deleteAtEnd()
{
	struct node *t=head;
	while(t->next->next!=NULL)
	{
		t=t->next;
	}
	t->next=NULL;
}

int main(void)
{
	insertAtEnd();
	display();
	cout<<"To delete at end enter 1 else 0"<<endl;
	int n;
	cin>>n;
	if(n==1)
	{
		deleteAtEnd();
		display();
	}
	return 0;
}
