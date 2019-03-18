#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void append(struct node **head_ref, int data)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = data;
    head->next = *head_ref;
    *head_ref = head;
}

void print(struct node *head){
 while(head != NULL){
     cout<<head->data<<" ";
     head = head->next;
 }
}

void sortedList(struct node **head_ref ,struct node *new_node){
  
  struct node *current;

  if(*head_ref == NULL || (*head_ref)->data >= new_node->data){
      new_node->next = *head_ref;
      *head_ref = new_node;
  }
  else{
      
      current = *head_ref;
      while(current->next != NULL && current->next->data < new_node->data){
       current = current->next;     
      }
      new_node->next = current->next;
      current->next = new_node;
  }
}

void insertion_sort(struct node **head_ref){
 struct node *sorted = NULL;
 struct node *current = *head_ref;

 while(current!=NULL){
  struct node *next = current->next;
  sortedList(&sorted,current);
  current = next;
 }
*head_ref = sorted;
}

int main()
{
    struct node *head = NULL;

    append(&head, 99);
    append(&head, 23);
    append(&head, 12);
    append(&head,34);
    append(&head,2);
    cout<<"Before insertion sort "<<"\n";
    print(head);
    cout<<"\n"<<"After insertion sort "<<"\n";
    insertion_sort(&head); 
    print(head);
    return 0;
}