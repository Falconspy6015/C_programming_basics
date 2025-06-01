#include <stdio.h>

int main(){

int arr[5] = {10,20,30,40,50};
int* ptr = arr; // int* ptr = &arr[0] also works.

for (int i =0; i<5; i++){

printf("the val of arr[%d] is %d \n", i, *(ptr +i));

}

}

//pointer aritmetic 
