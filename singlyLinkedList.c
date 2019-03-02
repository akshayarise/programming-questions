// create the singly linked list and then traversing the singly linked list.
#include<stdlib.h>
#include<stdio.h>
typedef struct node{
 	int data;
 	struct node *next;
 }Node;
 Node *head,*temp,*hold;

Node * insertAtBeg(int num,Node *head){
  Node *t;
  t = (Node *)malloc(sizeof(Node));
  t->data = num;
  t->next = head;
  head = t; 
  return head;
}

Node * insertAtEnd(int num,Node *head){
  Node *last ,*t;
  last = (Node *)malloc(sizeof(Node));
  t = head; 
  while(t->next){
   t = t->next;
  }
  t->next = last;
  last->data = num;
  last->next = NULL;
  return head;
}

int main(){
   
   int n,data,beginData,lastData;
   printf("enter the number of nodes\n");
   scanf("%d",&n);
   if(n<1){
   	printf("please enter the number of nodes geater than equals to 1");
   	return 0;
   }
   printf("enter the data node in the node\n");
   scanf("%d",&data); 
   head = (Node *) malloc(sizeof(Node));
   head->data = data;
   head->next = NULL;
   temp = head;
   --n;
   while(n--){
   	printf("enter the data in the node\n");
   	scanf("%d",&data);
    hold = (Node *) malloc(sizeof(Node));
    hold->data = data;
    temp->next = hold;
    temp = temp->next;   
   }
   temp->next = NULL;
   temp = head;

   // traversing the singly linked list.
   while(temp){
   	printf("%d\n",temp->data);
   	temp = temp->next;
   }
   printf("enter the number to be inserted at the beginning\n");
   scanf("%d",&beginData);
   Node *newhead = insertAtBeg(beginData,head);
  // traversing the singly linked list after inserting the element at the beginning.
   Node *newtemp = newhead;
   while(newtemp){
    printf("\n%d\n",newtemp->data);
    newtemp = newtemp->next;
   }

   printf("enter the number to be inserted at the last of the linked list\n");
   scanf("%d",&lastData);
   Node *head3 = insertAtEnd(lastData,head);

// traversing the singly linked list after inserting the element at the end.
   Node *temp3 = head3;
   while(temp3){
    printf("\n%d\n",temp3->data);
    temp3 = temp3->next;
   }
 return 0;
}