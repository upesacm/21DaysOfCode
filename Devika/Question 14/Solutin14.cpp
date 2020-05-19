#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next; 
};

struct node *head=NULL;
void push(int x)
{
	struct node *newnode=new node;
	newnode->data=x;
	newnode->next=head;
	head=newnode;
}
void pop()
{
	struct node *temp;
	temp=head;
	if(head==0)
	{
		cout<<"Underflow"<<endl;;
	}
	else
	{
		cout<<"Popped element: "<<temp->data<<endl;
		temp=temp->next;
	}
}
void display()
{
	struct node *temp;
	temp=head;
	if(head==0)
	{
		cout<<"Underflow"<<endl;
	}
	else
	{
		while(temp!=0)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
}
int main()
{
	int option,n,a=1;
	while(a)
	{
		cout<<"Press 1 to push:"<<endl<<"Press 2 to delete:"<<endl<<"Press 3 to display:"<<endl<<"Wrong input:"<<endl;
		cin>>option;
		switch(option)
		{
			case 1: {
				cout<<"enter value: ";
				cin>>n;
				push(n);
				break;
			}
			case 2: {
				pop();
				break;
			}
			case 3: {
				display();
				break;
			}
			
			default: {
				cout<<"Wrong output"<<endl;
				a=0;
				break;
			}
		}
	}
	return 0;
}
