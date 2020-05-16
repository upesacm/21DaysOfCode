#include <iostream>
#include <cstddef>
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

      Node* insert(Node *head,int data) {
          Node* newhead = new Node(data);
          if(head != NULL) {
              Node *temp = head;
              while(temp->next != NULL) {
                  temp = temp->next;
              }
              temp->next = newhead;
              return head;
          } else {
              return newhead;
          }
      }
      void display(Node *head)
