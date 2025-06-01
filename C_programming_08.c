#include<stdio.h>

int max (int x, int y){
int c = x;
if(c<y){
c=y;
}
return c;
}


float avg (int x, int y){
float c = (x+y)/2.0;
return c;
}


int main(){
int a = 5;
int b = 10;

printf ("the max of a,b is %d and average is %f \n", max(a,b), avg(a,b) );


}

//learnings: one of the operand in (/) division should be float for float divison to occur or else int division will occcur and answer will be rounded off to int
