#include <stdio.h>

int main(){

int sum =0;
int a;
for (int i=0; i<5; i++){
 printf("type the numbers u wanna sum\n");
 scanf("%d",&a);
 sum = sum + a;

}

printf ("the final sum is %d \n",sum);
  

}
// mistakes made: used comma instead of ; again in for loop.
