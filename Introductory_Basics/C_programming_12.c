#include <stdio.h>

int main(){

int a =5;
int* ptr =&a;

printf("val of var is %d, val of var using dereference is %d \n",a,*ptr);
printf("val of var address is %p, val of var address using  pointer  is %p \n",&a,(void*)ptr);



}




