#include <stdio.h>

void reverseArray(int arr[], int size) {
int temp =arr[0];
for (int i=0; i<size/2; i++){
temp = arr[size -i -1];
arr[size -i -1] = arr[i];
arr[i] =temp;
}


}

int main(){

int arr[5] = {10,20,30,40,50};

reverseArray( arr, 5);
for (int i=0; i<5; i++){printf("%d ,",arr[i]);}
printf("\n");

}

// 1 2 3 4
// 1 2 3 4 5
//reversing array
