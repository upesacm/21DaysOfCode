#include<iostream>
using namespace std;
class Stack {
	
	private :
		int top;
		int arr[5];
		
	public:
		Stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
			
		}
		bool isEmpty()
		{
			if(top==-1)
			return true;
			else 
			return false;
		}
		int isFull()
		{
			if(top==4)
			cout<<"Stack Overflow";
		}
		int push (int val)
		{
			if(isFull())
			cout<<"Stack is Overflowed .No value can be pushed ";
			else 
			arr[top++]=val;
		}
		int pop( )
		{
			if(isEmpty())
			cout<<"Stack is Empty .No value can be popped ";
			else
			{
				int popvalue=arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
		}
		int count()
		{
			return (top+1);
		}
		int peek(int pos)
		{
			if(isEmpty())
			cout<<"Stack underflow ";
			else
			{
				return arr[pos];
			}
			
		}
		void change (int pos,int val)
		{
		arr[pos]=val;
		cout<<"Value changed a location "<<pos<<endl;	
			
		}
		void display()
		{
			cout<<"All the values in the stack are :";
			for(int j=0;j<5;j++)
			{
				cout<<arr[j]<<endl;
			}
		}
};
int main(){

Stack s1;
int option,value,position;
do {

cout<<"Enter the option to do operation. Enter 0 for exit";
cout<<"1.Push() "<<endl;
cout<<"2.Pop() "<<endl;
cout<<"3. isEmpty()"<<endl;
cout<<"4. isFull()"<<endl;
cout<<"5.peek()"<<endl;
cout<<"6. count()"<<endl;
cout<<"7. change()"<<endl;
cout<<"8. display"<<endl;

cin>>option;
switch(option)
{
	case 1:
		cout<<"Enter an item to push in the stack :";
		cin>>value;
		s1.push(value);
		break;
	case 2:
		cout<<"Poped value"<<s1.pop()<<endl;
	    break;
	case 3:
		if(s1.isEmpty())
		cout<<"Stack is Empty"<<endl;
		else 
		cout<<"Stack is Not empty"<<endl;
		break;
	case 4:
	   if(s1.isFull())
       cout<<"Stack if Full"<<endl;
	   else 
	   cout<<"Stack is not full"<<endl;
	   break;
	case 5:
	     cout<<"Enter the position ";
		 cin>>position;
		 cout<<"Peek function called"<<s1.peek(position)<<endl;
	     break;
	case 6:
	    cout<<"Count function called"<<s1.count()<<endl;
	    break;
	case 7:
		cout<<"Change function called"<<endl;
		cout<<"Enter the position of the item you want to change ";
		cin>>position;
		cout<<"Enter the value you want to put"<<endl;
		cin>>value;
		s1.change(position,value);
		break;
	case 8:
		s1.display();
		break;
	default:
		cout<<"Enter proper option number"<<endl;
		
	
	
}
}while(option!=0);

return 0;
}

