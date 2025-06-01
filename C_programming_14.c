#include <stdio.h>

void swap(int* a ,int* b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}

int main(){

int a = 5;
int b =10;

swap(&a, &b);
printf("the val of a is %d, and the val of b is %d \n", a,b);


}


//learnings: you dont need *Temp u just need a helper integer value to store the values and swap them using deference based assignment.
