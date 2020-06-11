/*linked likst */

#include<iostream>
using namespace std;

struct node{
  int data;
  struct node*next;
};

struct node*head=NULL;
struct node*temp;

/*functions that are going to be used */

void ins_beg(struct node*);
void ins_end(struct node*);
void del_beg();
void traverse();

int main(){int choice,n;
  struct node *new1;  /*new node created*/
  while(1){
    cout<<"Enter your choice \n";
    cout<<"1.ins_beg \n 2.ins_end \n 3.del_beg \n 4. traverse";
    cin>>choice;
    switch(choice){

    case 1:
    new1= new struct node;  /*alternative of malloc */
    cout<<"Enter the data";
    cin>> new1->next=NULL;
    ins_beg(new1);
    break;

    case 2:
    new1= new struct node;  /*alternative of malloc */
    cout<<"Enter the data";
    cin>>new1->next=NULL;
    ins_end(new1);
    break;

    case 3:

    del_deg();
    break;

    case 5:

    traverese();
    break;

    default:

    exit(1);
    }
  }
}

void ins_beg(struct node *new1){
  if(head==NULL)
   head=new1;
   else{
     new1->next=head;
     head=new1;
   }
}

void ins_end( struct node *new1){
  if(head==NULL)
  head=new1;
  else{
    while(temp->next!=NULL)
      temp=temp-> next;
      temp->next=new1;
    }
  }

  void del_beg(){
  if(head==NULL)
   cout<<"Empty"
  else
   head= head->next;
 }

 void traverse(){
   struct node*temp=head;
   while(temp!=NULL){
     cout<<temp->data<<endl;
     temp=temp->next;
   }
 }
