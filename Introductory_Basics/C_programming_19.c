#include<stdio.h>
#include<stdlib.h>

//objective to reverse a linked list.


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

Node* reverselist(Node* head){

Node* temp = head;

while(temp->next != NULL){
temp = temp->next;
}
//temp is at one before null rt now
Node* newHead = temp;
Node* anothertemp = head;
while(temp !=head){
while(anothertemp->next != temp){
anothertemp = anothertemp->next;
}
anothertemp->next =NULL;

temp->next = anothertemp;

temp =anothertemp;
anothertemp = head;

}

head = newHead;

return head;
}
//MARKS THE END OF THE FUNCTION




int main(){

Node* head = createNode(10);
insertNode(head,1,29);
insertNode(head,2,34);
insertNode(head,3,45);

printlist(head);
//reversing now

head =reverselist(head);
printlist(head);


}

//in this i did it using O(n^2) time complexity by doing nested reversal 
//key learnings:
// 1) head updates wont reflect in main so a void reverselist wont work that way so i made it return the head and updated it.
// 2) its two loops nested coz im reversing from end so i have to calculate prev node everytime it would be much simpler to reverse from start , using curr next and prev.

//here is that code , uncomment it with ctrl + / in vscode.

//Node* reverseList(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = NULL;

//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }


//here is a recursive implementation of the same
// Node* reverseRecursive(Node* head) {
//     if (head == NULL || head->next == NULL)
//         return head;

//     Node* rest = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return rest;
// }



//here is floyd method for detecting middle of a linked list

//slow = head;
//fast = head;
//while (fast && fast->next) {
    //slow = slow->next;
  //  fast = fast->next->next;
//}
// slow now points to the middle node


