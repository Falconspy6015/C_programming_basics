#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
 int data; 
 struct Node* next;

}Node;

//creating Node func
Node* createNode(int value){

Node* newNode = (Node*)malloc(sizeof(Node));
 if (newNode == NULL){
 printf("memory assignment failed");
 exit(1);
}
newNode->data = value;
newNode->next = NULL;

return newNode;

}

void insertNode (Node* head , int position, int value){

Node* temp = head;
for (int i =0; i<position-1; i++){
if (temp == NULL) {
            printf("Position %d out of bounds!\n", position);
            return;

}
temp = temp->next;
}
temp->next = createNode(value);


}

void printlist(Node* head){

Node* temp = head;
while(temp != NULL){
printf("%d -->",temp->data);
temp = temp->next;
}
printf("NULL\n");
}
int main(){

Node* head = createNode(10);
insertNode(head,1,29);
insertNode(head,2,34);
insertNode(head,3,45);

printlist(head);


}
