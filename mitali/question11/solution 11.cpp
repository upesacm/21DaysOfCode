#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node *next, *temp, *prev;
        if (head == nullptr) return nullptr;
        else if (head->next == nullptr) return head;
        else {
            temp = head;
            next = head->next;
            while (head->data == next->data){
                temp = head;
                delete temp;
                temp = next;
                head = next;
                next = next->next;
                if (!next) return head;
            }
            while (next->next){
                    prev = temp;
                    temp = next;
                    next = next->next;
                    if (temp->data == next->data){
                        prev->next = next;
                        delete temp;
                        temp = prev;
                    }
                }
        }
        return head;
    }
          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;

               }
                    return head;


          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    head=mylist.removeDuplicates(head);

	mylist.display(head);

}
