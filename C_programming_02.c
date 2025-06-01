#include <stdio.h>

int main(){

int a;
int b;
int c;	
printf("enter value of a and b\n");
scanf("%d %d",&a,&b);
c = a+b;
printf ("the sum is %d \n",c);

}
//learnings: in scanf %d %d means u expect inputs with a space like 10 5 ,if it was %d,%d it means u expect 10,5)
// mistakes commited: forgot to write c = a+b;
