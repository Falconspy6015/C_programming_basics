#include <stdio.h>

int add(int x,int y){
return x+y;
}


int main(){

int a;
int b;
int c;

printf("enter val of a and b \n");
scanf("%d %d", &a, &b);

c = add(a,b);
printf ("sum is %d \n",c);


}

//mistakes made: forgot quotes for scanf and confused backward and forward slashes in \n
