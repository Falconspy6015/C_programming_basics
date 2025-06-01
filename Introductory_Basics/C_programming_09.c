#include <stdio.h>

int findMax(int arr[], int size){
int max = arr[0];
for (int i=1; i<size; i++){
if(max<arr[i]){
max = arr[i];}

}

return max;
}


int main(){

int size;
printf("enter the size of array u wanna find max of\n");
scanf("%d",&size);
int arr[size];

for (int i=0; i<size; i++){
printf("enter the %dth number\n",i+1);
scanf("%d", &arr[i]);
}

printf("the max of the given array is %d \n", findMax(arr,size));

}

//mistakes made: forgot to give & to scanf it was expecting int* and i gave int.


