#include <stdio.h>
#include <stdlib.h>

int main(){

//get input
//allocate memory
//always check if values is null 
//fill values
//print values
//free mem

//getting input
int n;
printf("enter no of values in ur array\n");
scanf("%d",&n);

//allocate memory
int* arr = (int*)malloc( n*sizeof(int));

//checking if memory allocation failed or not
 if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;}

//fill values

printf ("now enter the values one by one\n");
for (int i=0;i<n;i++){
scanf("%d",&arr[i]);
}


//printing values
printf (" the values you entered  one by one are:\n");
for (int i=0;i<n;i++){
printf("%d",arr[i]);
printf("\n");

}


free(arr); //release memory to avoid leaks
return 0;


}
