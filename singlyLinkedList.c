// create the singly linked list and then traversing the singly linked list.
#include<stdlib.h>
#include<stdio.h>
typedef struct node{
 	int data;
 	struct node *next;
 }Node;
 Node *head,*temp,*hold;

int main(){
   
   int n,data;
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
 return 0;
}