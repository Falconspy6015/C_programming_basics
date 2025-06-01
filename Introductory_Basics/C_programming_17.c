#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
 int data;
 struct Node* next;
} Node;  //typedef used for alias , now u can refer to it as Node instead of struct Node


Node* createNode(int value){
 Node* newNode = (Node*)malloc(sizeof(Node));
   if (newNode == NULL){
     printf("Memory allocation failed");
     exit(1);
}

newNode->data = value;
newNode->next= NULL;
return newNode;
}

void printlist(Node* head){

Node* temp = head;
while (temp !=NULL){
 printf("%d-->", temp->data);
temp = temp->next;

}
printf("NULL\n");	
}
int main(){
Node* head = createNode(10);
head->next = createNode(20);
head->next->next = createNode(30);

printlist(head);

free(head->next->next);
free(head->next);
free(head);

return 0;
}

//learnings: 
// 1) seg falut dump happens due to null dereference which happens due to assignment errors ie = instead of == in if conditions.
// 2) stacking happens when u write to mem which is not allowed.
