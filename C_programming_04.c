#include <stdio.h>

int main(){

int arr[5];

printf("enter 5 inputs\n");
for (int i=0;i<5;i++){
 scanf("%d",&arr[i]);
}

printf("the numbers are\n");
for (int i=0;i<5;i++){
 printf("%d \n",arr[i]);
}

}
// mistakes made: 1) typo in header , 2) used comma in for loop statments instead of ; , 3) forgot to close braces } in mains
