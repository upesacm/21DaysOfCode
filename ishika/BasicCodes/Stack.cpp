#include<iostream>
#define MAX 5
using namespace std;

void push();
void pop();
void display();

int stack[MAX];
int top = -1;

int main(){
	int choice, n;

	while(1){
		cout<<"enter the choice\n";
		cout<<"1. push\n2. pop\n3. display\n4. exit\n";
		cin>>choice;
		switch(choice){
			case 1:
					push();
					break;
			case 2:
					pop();
					break;
			case 3:
					display();
					break;
			case 4:
					exit(1);
			default:
					cout<<"Wrong choice"<<endl;
		}

	}
}
void push(){
	int n;
	if(top >= MAX-1)
		cout<<"stack overflow\n";
	else
	{
		top = top + 1;
		cout<<"enter the number to push";
			cin>>n;
		stack[top] = n;
	}
}
void pop(){
	if(top == -1)
		cout<<"stack is underflow\n";
	else
		top = top - 1;
}
void display(){
	int i = 0;
	if(top == -1)
		cout<<"stack is underflow\n";
	else{
			while(i <= top){
				cout<<stack[i]<<endl;
				i++;
			}

	}
}
